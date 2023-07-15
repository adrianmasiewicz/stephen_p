#include <iostream>

#ifndef STRINGBAD_H_
#define STRINGBAD_H_

using std::ostream;

class StringBad {
private:
    char* str;
    int len;
    static int num_string;

public:
    StringBad(const char* s);
    StringBad();
    ~StringBad();
    friend ostream& operator<<(ostream& os, const StringBad& st);
};

#endif