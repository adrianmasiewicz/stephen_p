#pragma once
#include <string>
using std::string;

class TableTennisPlayer {
private:
    string firstName;
    string lastName;
    bool hasTable;

public:
    TableTennisPlayer(const string& fn = "no date",
                      const string& ln = "no date",
                      bool ht = false);
    void Name() const;
    bool HasTable() const { return hasTable; }
    void ResetTable(bool v) {hasTable = v;}
};