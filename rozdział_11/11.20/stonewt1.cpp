#include "../11.19/stonewt1.h"
#include <iostream>

using std::cout;

StoneWt::StoneWt(double lbs) {
    stone = int(lbs) / LBS_per_stn;
    pds_left = int(lbs) % LBS_per_stn + lbs - int(lbs);
    pounds = lbs;
}

StoneWt::StoneWt(int stn, double lbs) {
    stone = stn;
    pds_left = lbs;
    pounds = stn * LBS_per_stn;
}

StoneWt::StoneWt() {
    stone = pounds = pds_left = 0;
}

StoneWt::~StoneWt() {}

void StoneWt::show_stn() const {
    cout << stone << " stones, " << pds_left << " pounds\n";
}

void StoneWt::show_lbs() const {
    cout << pounds << " pounds\n";
}

StoneWt::operator int() const{
    return int(pounds + 0.5);
}

StoneWt::operator double() const{
    return double(pounds);
}