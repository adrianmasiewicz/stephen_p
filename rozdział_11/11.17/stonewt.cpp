#include <iostream>
#include "../11.16/stonewt.h"

using std::cout;

StoneWt::StoneWt(double lbs){
    stone = int(lbs) / LBS_per_stn;
    pds_left = int (lbs) % LBS_per_stn + lbs - int(lbs);
    pounds = lbs;
}

StoneWt::StoneWt(int stn, double lbs){
    stone = stn;
    pds_left = lbs;
    pounds = stn * LBS_per_stn;
}

StoneWt::~StoneWt(){}

void StoneWt::show_stn() const{
    cout << stone<< " stones, "<<pds_left<<" pounds\n";
}

void StoneWt::show_lbs() const{
    cout << pounds <<" pounds\n";
}