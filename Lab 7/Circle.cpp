#include "Circle.h"

namespace shapes{
    Circle::Circle(){
        radius = 0;
    }
    Circle::~Circle() = default;

    void Circle::setRadius(double radius){
        this -> radius = radius;
    }

    double Circle::getRadius(){
        return radius;
    }
}