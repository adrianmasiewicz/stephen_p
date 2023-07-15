#include "../12.1/stringbad.h"
#include <cstring>

using std::cout;

int StringBad::num_string = 0;

StringBad::StringBad(const char* s){
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_string++;
    cout << num_string<<": \""<<str<<"\" - object created.\n";
}

StringBad::StringBad(){
    len = 4;
    str = new char[4];
    std::strcpy(str, "C++");
    num_string++;
    cout << num_string<<": \""<<str<<"\" - object created.\n";
}

StringBad::~StringBad(){
    cout <<"\""<<str<<"\" - object deleted.\n";
    --num_string;
    cout << "They are "<<num_string<<".\n";
    delete[] str;
}

std::ostream& operator<<(std::ostream& os, const StringBad & st){
    os <<st.str;
    return os;
}