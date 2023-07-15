#ifndef STONEWT1_H_
#define STONEWT1_H_

class StoneWt{
private:
    enum {LBS_per_stn = 14};
    int stone;
    double pds_left;
    double pounds;
public:
    StoneWt(double lbs);
    StoneWt(int stn, double lbs);
    StoneWt();
    ~StoneWt();
    void show_lbs() const;
    void show_stn() const;
    operator int() const;
    operator double()const;

};

#endif