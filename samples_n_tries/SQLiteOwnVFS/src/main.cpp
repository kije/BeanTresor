#include "header.h"
#include "lib/sqlite-amalgamation/sqlite3.h"
#include "CustomVFS.h"
#include "custom_vfs.h"

using namespace std;

int main() {
    std::shared_ptr<stringstream> strstrm = make_shared<stringstream>();
    openConnection(strstrm);
    return 0;
}