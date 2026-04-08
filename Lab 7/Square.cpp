#include "Square.h"

namespace shapes{
    Square::Square(){
       length = 0;
    }
    Square::~Square() = default;

    Square::Square(double l){
        this -> length = l;
    }

    void Square::setLength(double length){
        this -> length = length;
    }

    double Square::getLength(){
        return length;
    }
}