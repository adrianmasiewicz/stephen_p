#include "file.hpp"
#include <iostream>

Display::Display() {
    std::cout << "Your color list is: ";
}


Display::~Display() {
    std::cout << "Goodbye "
              << "!\n";
}

void Display::show(const std::string sa[], int n) const{
    for (int i = 0; i < n; i++) {
        std::cout << i + 1 << " : " << sa[i] << " ";
    }
    std::cout << std::endl;
}