#include "Area.h"
#include "Triangle.h"
#include "Circle.h"
#include "Square.h"

const double pi = 3.1415926536;

double Area::getAreaOfCircle(shapes::Circle crc){
    double radius = crc.getRadius();
    double area = pi * radius * radius;

    return area;
}

double Area::getAreaOfSquare(shapes::Square sqr){
    double length = sqr.getLength();
    double area = length * length;

    return area;
}

double Area::getAreaOfTriangle(shapes::Triangle tri){
    double base = tri.getBase();
    double height = tri.getHeight();

    double area = 0.5 * base * height;

    return area;
}