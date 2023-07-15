#pragma once
#include <string>
using std::string;

class TableTennisPlayer {
private:
    string firstName;
    string lastName;
    bool hasTable;

public:
    TableTennisPlayer(const string& fn = "no data",
                      const string& ln = "no data",
                      bool ht = "false");
    void Name() const;
    bool HasTable() const { return hasTable; };
    void ResetTable(bool v) { hasTable = v; };
};

class RatedPlayer : public TableTennisPlayer {
private:
    unsigned int rating;

public:
    RatedPlayer(unsigned int r = 0, const string& fn = "no data", const string& ln = "no data", bool ht = false);
    RatedPlayer(unsigned int r, const TableTennisPlayer& tp);
    unsigned int Rating() const { return rating; };
    void ResetRating(unsigned int r) { rating = r; };
};