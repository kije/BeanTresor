#include <sqlite3.h>
#include "CustomVFS.h"
#include "lib/sqlite-amalgamation/sqlite3.h"

using namespace kije;

int CustomVFS::xOpen(sqlite3_vfs *vfs, const char *zName, sqlite3_file *fileBase, int flags, int *pOutFlags) {
    return 0;
}

int CustomVFS::xClose(sqlite3_file *fileBase) {
    return 0;
}

int CustomVFS::xRead(sqlite3_file *fileBase, void *buffer, int quantity, sqlite3_int64 offset) {
    return 0;
}

int CustomVFS::xWrite(sqlite3_file *fileBase, const void *buffer, int quantity, sqlite3_int64 offset) {
    return 0;
}

int CustomVFS::xTruncate(sqlite3_file *fileBase, sqlite3_int64 size) {
    return 0;
}

int CustomVFS::xSync(sqlite3_file *fileBase, int i) {
    return 0;
}

int CustomVFS::xFileSize(sqlite3_file *fileBase, sqlite3_int64 *outputSize) {
    return 0;
}

int CustomVFS::xLock(sqlite3_file *fileBase, int level) {
    return 0;
}

int CustomVFS::xUnlock(sqlite3_file *fileBase, int level) {
    return 0;
}

int CustomVFS::xCheckReservedLock(sqlite3_file *fileBase, int *pResOut) {
    return 0;
}

int CustomVFS::xFileControl(sqlite3_file *fileBase, int op, void *pArg) {
    return 0;
}

int CustomVFS::xSectorSize(sqlite3_file *file) {
    return 0;
}

int CustomVFS::xDeviceCharacteristics(sqlite3_file *file) {
    return 0;
}

int CustomVFS::xDelete(sqlite3_vfs *vfs, const char *zName, int syncDir) {
    return 0;
}

int CustomVFS::xAccess(sqlite3_vfs *vfs, const char *zName, int flags, int *pResOut) {
    return 0;
}

int CustomVFS::xFullPathname(sqlite3_vfs *vfs, const char *zName, int nOut, char *zOut) {
    return 0;
}

int CustomVFS::xRandomness(sqlite3_vfs *vfs, int nByte, char *zOut) {
    return 0;
}

int CustomVFS::xSleep(sqlite3_vfs *vfs, int microseconds) {
    return 0;
}

int CustomVFS::xCurrentTime(sqlite3_vfs *vfs, double *output) {
    return 0;
}

int CustomVFS::xCurrentTimeInt64(sqlite3_vfs *vfs, sqlite3_int64 *output) {
    return 0;
}
