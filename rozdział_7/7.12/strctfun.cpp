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

polar rect_to_polar(rect xy_pos);
void show_polar(polar da_pos);

int main() {
    rect r_place;
    polar p_place;

    cout << "Give me a value x and y:"<<endl;

    while (cin >> r_place.x >> r_place.y){
        p_place = rect_to_polar(r_place);
        show_polar(p_place);
        cout << "Give me another a value x and y, or quit with the q button: "<<endl;
    }

    cout << "Finished!"<<endl;
}

polar rect_to_polar(rect xy_pos) {
    polar answer;
    answer.distance = sqrt(xy_pos.x * xy_pos.x + xy_pos.y * xy_pos.y);
    answer.angle = atan2(xy_pos.y, xy_pos.x);   
    return answer;
}
void show_polar(polar da_pos) {
    const double Rad_to_deg = 180 / M_PI;
    cout << "Distance = "<<da_pos.distance;
    cout << ", Angle = "<<da_pos.angle * Rad_to_deg;
    cout << " degrees."<<endl;
}