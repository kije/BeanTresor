#include <iostream>
extern "C" {
    #include "sqlite3.h"
}
#include <string>

using namespace std;


static int callback(void *NotUsed, int argc, char **argv, char **azColName) {
    int i;
    for (i = 0; i < argc; i++) {
        printf("%s = %s\t\t", azColName[i], argv[i] ? argv[i] : "NULL");
    }
    cout << endl;
    return 0;
}

void execute_sql_command(string cmd, sqlite3 *db) {
    static char *zErrMsg = 0;
    int rc = sqlite3_exec(db, cmd.c_str(), callback, 0, &zErrMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", zErrMsg);
        sqlite3_free(zErrMsg);
    }
}

int main(int argc, char **argv) {
    sqlite3 *db;
    int rc;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s DATABASE\n", argv[0]);
        return (1);
    }
    rc = sqlite3_open(argv[1], &db);
    if (rc) {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        return (1);
    }

    string cmd;

    while (true) {
        cout << "Enter Command: " << endl;
        getline(cin, cmd);

        if ("exit" == cmd) {
            break;
        } else if ("help" == cmd) {
            cout << "Commands:" << endl << "exit\t\tExit this programm." << endl << "help\t\tShows this information" << endl << endl;
        } else {
            execute_sql_command(cmd, db);
        }
    }

    sqlite3_close(db);
    return 0;
}