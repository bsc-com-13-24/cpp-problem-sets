#include "Triangle.h"

namespace shapes{
    Triangle::Triangle(){
        base = 0;
        height = 0;
    }
    Triangle::~Triangle() = default;

    void Triangle::setBase(double base){
        this -> base = base;
    }

    void Triangle::setHeight(double height){
        this -> height = height;
    }

    double Triangle::getBase(){
        return base;
    }

    double Triangle::getHeight(){
        return height;
    }
}