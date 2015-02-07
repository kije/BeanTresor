#pragma once
#include "header.h"
#include "lib/sqlite-amalgamation/sqlite3.h"
#include <chrono>
#include <thread>
#include <mutex>
#include <map>
#include <string>
#include <cstring>
#include <cassert>
#include <memory>
#include <vector>
#include <istream>
#include <sstream>
#include <cmath>
#include <math.h>
#include <random>

#ifndef _HEADER_CUSTOM_VFS_2_H
#define _HEADER_CUSTOM_VFS_2_H

std::string getIostreamVFSName();
sqlite3* openConnection(std::shared_ptr<std::iostream> stream);

#endif /* _HEADER_CUSTOM_VFS_2_H */