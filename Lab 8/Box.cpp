#include "Box.h"
#include <iostream>
using namespace std;

Box::Box(){
    length = 0.0;
    breadth = 0.0;
    height = 0.0;
}

Box::Box(const double newLength, const double newBreadth, const double newHeight){
    length = newLength;
    breadth = newBreadth;
    height = newHeight;
}

Box::~Box() = default;

double Box::getVolume(){
    return length * height * breadth;
}

void Box::setBreadth(double bre){
    breadth = bre;
}

void Box::setHeight(double hei){
    height = hei;
}

void Box::setlength(double len){
    length = len;
}

Box Box::operator+(const Box &n){
    Box box;

    box.length = this -> length + n.length;
    box.breadth = this -> breadth + n.breadth;
    box.height = this -> height + n.height;
    return box;
}