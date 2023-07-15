#include "../13.1/tabtenn0.h"
#include <iostream>

TableTennisPlayer::TableTennisPlayer(const string& fn,
                                     const string& ln,
                                     bool ht)
    : firstName(fn), lastName(ln), hasTable(ht) {}

void TableTennisPlayer::Name() const
{
    std::cout <<lastName <<", "<<firstName;
}