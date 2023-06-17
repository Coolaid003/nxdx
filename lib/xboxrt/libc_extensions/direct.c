// SPDX-License-Identifier: MIT

// SPDX-FileCopyrightText: 2023 ExoSkye

// Part of Microsoft CRT

#include <errno.h>
#include <string.h>
#include <stdbool.h>
#include <windows.h>

// Made referencing https://www.digitalmars.com/rtl/direct.html, retrieved 2023-06-10, copyrighted 1999-2018 by Digital Mars

static int convert_error(DWORD winerror)
{
    switch (winerror) {
        case ERROR_FILE_NOT_FOUND:
        case ERROR_PATH_NOT_FOUND:
        case ERROR_FILENAME_EXCED_RANGE:
        case ERROR_BAD_PATHNAME:
            return ENOENT;
            break;
        case ERROR_ALREADY_EXISTS:
        case ERROR_FILE_EXISTS:
            return EEXIST;
            break;
        case ERROR_NOT_LOCKED:
        case ERROR_ACCESS_DENIED:
            return EACCES;
            break;
        case ERROR_INVAID_PARAMETER:
        case ERROR_INVALID_FUNCTION:
            return EINVAL;
            break;
        case ERROR_NOT_ENOUGH_MEMORY:
            return ENOMEM;
            break;
        case ERROR_DIR_NOT_EMPTY:
            return ENOTEMPTY;
            break;
    }
}

/*
 * TODO: Make a working directory system?
 */

int _chdir(char* path) {
    return 0;
}

int _chdrive(int drive) {
    return 0;
}

char* _getcwd(char* buffer, size_t length) {
    errno = -EINVAL;
    return NULL;
}

char* _getwd(char* path_name) {
    errno = -EINVAL;
    return NULL;
}

int _getdrive(void) {
    errno = -EINVAL;
    return 0;
}

/*
 * Below are the only things that can work
 */

int _mkdir(const char* pathname) {
    BOOL result = CreateDirectoryA(
            pathname,
            NULL
    );

    if (result == true) {
        return 0;
    } else {
        DWORD err = GetLastError();

        if (err == ERROR_ALREADY_EXISTS) {
            errno = EACCES;
        } else if (err == ERROR_PATH_NOT_FOUND) {
            errno = ENOENT;
        }

        return -1;
    }
}

int _rmdir(const char* pathname) {
    BOOL result = RemoveDirectoryA(
            pathname
    );

    if (result == true) {
        return 0;
    } else {
        DWORD err = GetLastError();

        if (err == ERROR_ALREADY_EXISTS) {
            errno = EACCES;
        } else if (err == ERROR_PATH_NOT_FOUND) {
            errno = ENOENT;
        }

        return -1;
    }
}
