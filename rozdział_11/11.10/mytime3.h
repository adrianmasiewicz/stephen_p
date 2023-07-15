#ifndef MYTIME3_H_
#define MYTIME3_H_
#include <iostream>

using std::ostream;

class Time {
private:
    int hours;
    int minutes;

public:
    Time();
    Time(int h, int m = 0);
    void addMin(int min);
    void addHr(int hr);
    void reset(int h = 0, int m = 0);
    Time operator+(const Time& t) const;
    Time operator-(const Time& t) const;
    Time operator*(double n) const;
    friend Time operator*(double m, const Time& t) {
        return t * m;
    }
    friend ostream & operator<<(ostream& os, const Time& t);
};

#endif