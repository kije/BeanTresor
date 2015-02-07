#pragma once

#include "lib/sqlite-amalgamation/sqlite3.h"
#include "header.h"

#ifndef _HEADER_CUSTOM_VFS_H
#define _HEADER_CUSTOM_VFS_H
namespace kije {
    class CustomVFS {
    public:
        static int xOpen(sqlite3_vfs *, const char *zName, sqlite3_file *fileBase, int flags, int *pOutFlags);

        static int xClose(sqlite3_file *fileBase);

        static int xRead(sqlite3_file *fileBase, void *buffer, int quantity, sqlite3_int64 offset);

        static int xWrite(sqlite3_file *fileBase, const void *buffer, int quantity, sqlite3_int64 offset);

        static int xTruncate(sqlite3_file *fileBase, sqlite3_int64 size);

        static int xSync(sqlite3_file *fileBase, int);

        static int xFileSize(sqlite3_file *fileBase, sqlite3_int64 *outputSize);

        static int xLock(sqlite3_file *fileBase, int level);

        static int xUnlock(sqlite3_file *fileBase, int level);

        static int xCheckReservedLock(sqlite3_file *fileBase, int *pResOut);

        static int xFileControl(sqlite3_file *fileBase, int op, void *pArg);

        static int xSectorSize(sqlite3_file *);

        static int xDeviceCharacteristics(sqlite3_file *);

        static int xDelete(sqlite3_vfs *, const char *zName, int syncDir);

        static int xAccess(sqlite3_vfs *, const char *zName, int flags, int *pResOut);

        static int xFullPathname(sqlite3_vfs *, const char *zName, int nOut, char *zOut);

        static int xRandomness(sqlite3_vfs *, int nByte, char *zOut);

        static int xSleep(sqlite3_vfs *, int microseconds);

        static int xCurrentTime(sqlite3_vfs *, double *output);

        static int xCurrentTimeInt64(sqlite3_vfs *, sqlite3_int64 *output);
    };
}
#endif /* _HEADER_CUSTOM_VFS_H */