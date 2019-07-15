#ifndef __FILEAPI_H__
#define __FILEAPI_H__

#include <windef.h>
#include <winbase.h>
#include <winnt.h>

#ifdef __cplusplus
extern "C"
{
#endif

#define CREATE_NEW 1
#define CREATE_ALWAYS 2
#define OPEN_EXISTING 3
#define OPEN_ALWAYS 4
#define TRUNCATE_EXISTING 5

HANDLE CreateFileA (LPCSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile);
BOOL ReadFile (HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped);
BOOL WriteFile (HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped);
DWORD SetFilePointer (HANDLE hFile, LONG lDistanceToMove, PLONG lpDistanceToMoveHigh, DWORD dwMoveMethod);
BOOL SetFilePointerEx (HANDLE hFile, LARGE_INTEGER liDistanceToMove, PLARGE_INTEGER lpNewFilePointer, DWORD dwMoveMethod);

HANDLE FindFirstFileA (LPCSTR lpFileName, LPWIN32_FIND_DATAA lpFindFileData);
BOOL FindNextFileA (HANDLE hFindFile, LPWIN32_FIND_DATAA lpFindFileData);
BOOL FindClose (HANDLE hFindFile);

#ifndef UNICODE
#define CreateFile CreateFileA
#define FindFirstFile FindFirstFileA
#define FindNextFile FindNextFileA
#else
#error nxdk does not support the Unicode API
#endif

#ifdef __cplusplus
}
#endif

#endif
