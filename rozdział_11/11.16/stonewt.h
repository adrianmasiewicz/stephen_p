#ifndef STONEWT_H_
#define STONEWT_H_

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
};

#endif