#pragma once

#include <iostream>

using namespace std;

class Box
{
private:
    double length;
    double breadth;
    double height;

public:
    Box();
    Box(const double newLength, const double newBreadth, const double newHeight);
    ~Box();

    double getVolume();
    void setBreadth(double bre);
    void setlength(double len);
    void setHeight(double hei);

    Box operator+(const Box &n);

};
