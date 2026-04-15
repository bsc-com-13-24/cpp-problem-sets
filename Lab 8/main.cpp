#include "Box.h"
#include <iostream>

using namespace std;

int main(){
    Box box1;
    Box box2;
    Box box3;
    double volume = 0.0;

    box1.setlength(6.0);
    box1.setHeight(5.0);
    box1.setHeight(7.0);

    box2.setlength(12.0);
    box2.setHeight(10.0);
    box2.setBreadth(13.0);

    box3 = box1 + box2;

    volume = box1.getVolume();
    cout << "Volume of box 1: " << volume << endl;

    volume = box2.getVolume();
    cout << "Volume of box 2: " << volume << endl;

    volume = box3.getVolume();
    cout << "Volume of box 3: " << volume << endl;

    return 0;
}