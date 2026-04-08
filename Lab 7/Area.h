#pragma once
#include "Circle.h"
#include "Triangle.h"
#include "Square.h"

class Area
{

public:
    static double getAreaOfSquare(shapes::Square sqr);
    static double getAreaOfCircle(shapes::Circle crc);
    static double getAreaOfTriangle(shapes::Triangle tri);
};