//
// Created by fade on 2023/5/5.
//

#ifndef CPP_DEMO_TABTENN0_H
#define CPP_DEMO_TABTENN0_H
#include <string>
using std::string;
class TableTennisPlayer {
    string firstname;
    string lastname;
    bool hasTable;
public:
    TableTennisPlayer(const string & fn = "none", const string & ln = "none", bool ht = false);
    void Name() const;
    bool HasTable() const { return hasTable; }
    void ResetTable(bool v) { hasTable = v; }
};
#endif //CPP_DEMO_TABTENN0_H
