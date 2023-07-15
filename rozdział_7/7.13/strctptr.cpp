#include <cmath>
#include <iostream>
using namespace std;

struct polar {
    double distance;
    double angle;
};

struct rect {
    double x;
    double y;
};

void rect_to_polar(const rect* pxy, polar* pda);
void show_polar(const polar* da_pol);

int main() {
    rect r_place;
    polar p_place;

    cout << "Give me a value x and y: ";
    while (cin >> r_place.x >> r_place.y) {
        rect_to_polar(&r_place, &p_place);
        show_polar(&p_place);
        cout << "Give me next a value x and y, or quit whit the q button: ";
    }
    cout <<"Finished!"<<endl;
}

void rect_to_polar(const rect* pxy, polar* pda) {
    pda->distance = sqrt(pxy->x * pxy->x + pxy->y + pxy->y);
    pda->angle = atan2(pxy->y, pxy->x);
}
void show_polar(const polar* da_pos) {
    const double Rad_to_deg = 180 / M_PI;
    cout << "Distance = " << da_pos->distance;
    cout << ", Angle = " << da_pos->angle * Rad_to_deg;
    cout << " degrees." << endl;
}