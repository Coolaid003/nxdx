#include <nxdk/log_console.h>
#include <hal/video.h>
#include <nxdk/mount.h>
#include <windows.h>

int main(void)
{
    XVideoSetMode(640, 480, 32, REFRESH_DEFAULT);

    // Mount some drives for demonstration purposes
    BOOL ret;
    ret = nxMountDrive('C', "\\Device\\Harddisk0\\Partition2\\");
    if (!ret) {
        nxLogPrint("Failed to mount C: drive!\n");
        Sleep(5000);
        return 1;
    }
    ret = nxMountDrive('E', "\\Device\\Harddisk0\\Partition1\\");
    if (!ret) {
        nxLogPrint("Failed to mount E: drive!\n");
        Sleep(5000);
        return 1;
    }

    // Retrieve drive bitmaks. Every bit represents one drive letter
    DWORD driveBits = GetLogicalDrives();
    if (driveBits == 0 && GetLastError() != ERROR_SUCCESS) {
        nxLogPrint("Failed to retrieve drive bitmask!\n");
        Sleep(5000);
        return 1;
    }
    nxLogPrintf("Drive bitmask: 0x%lx\n\n", driveBits);


    // Reserve buffer long enough for all possible drive strings plus null-terminator
    char buffer[26 * 4 + 1];
    // IMPORTANT: The size passed to GetLogicalDriveStringsA is WITHOUT the null-terminator, even though it gets written
    DWORD charsWritten = GetLogicalDriveStringsA(sizeof(buffer)-1, buffer);
    if (charsWritten == 0) {
        // Additional error info can be retrieved with GetLastError()
        nxLogPrint("Failed to retrieve drive strings!\n");
        Sleep(5000);
        return 1;
    }

    if (charsWritten > sizeof(buffer) - 1) {
        // Can't happen here as our buffer is large enough to cover all possibilities
        nxLogPrint("Buffer for GetLogicalDriveStringsA too small!\n");
        Sleep(5000);
        return 1;
    }

    nxLogPrint("Drives found:\n");
    char *drive = buffer;
    while (drive < buffer + charsWritten) {
        nxLogPrintf("%s\n", drive);
        while(*drive++);
    }
    nxLogPrint("\ndone");

    while(1) {
        Sleep(2000);
    }

    return 0;
}
