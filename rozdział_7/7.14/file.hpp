#pragma Once
#include <string>

class Display {
public:
    Display();
    ~Display();

    void show(const std::string sa[], int n) const;
};