//
// Created by fade on 2023/5/5.
//

#include "tabtenn0.h"
#include <iostream>
TableTennisPlayer::TableTennisPlayer(const std::string &fn, const std::string &ln, bool ht) :
firstname(fn), lastname(ln), hasTable(ht) {}
void TableTennisPlayer::Name() const {
    std::cout << lastname << ", " << firstname;
}
RatePlayer::RatePlayer(unsigned int r, const string & fn, const string & ln, bool ht) : TableTennisPlayer(fn, ln, ht) {
    rating = r;
}
RatePlayer::RatePlayer(unsigned int r, const TableTennisPlayer & tp) : TableTennisPlayer(tp), rating(r) {

}