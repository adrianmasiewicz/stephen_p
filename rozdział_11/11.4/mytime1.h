#ifndef MYTIME1_H_
#define MYTIME1_H_

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
    Time operator+(const Time & t) const;
    void show() const;
};

#endif
