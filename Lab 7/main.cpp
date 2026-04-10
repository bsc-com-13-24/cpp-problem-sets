#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Triangle.h"
#include "Square.h"

int main()
{
    bool quit = false;

    while (!quit)
    {
        int option;

        cout << "Choose which area of shape you want to create\n1. Calculate area of Circle\n2. Calculate area of Square\n3. Calculate area of Triangle\n4. Quit\n";
        cin >> option;

        if (option >= 1 && option <= 4)
        {
            switch (option)
            {
            case 1:
            {
                shapes::Circle crc;
                double radius;
                cout << "Enter radius: " << endl;
                cin >> radius;
                crc.setRadius(radius);
                cout << "The area of the circle with radius " << radius << " is: " << Area::getAreaOfCircle(crc) << endl;
                break;
            }
            case 2:
            {
                shapes::Square sqr;
                double length;
                cout << "Enter the length of the square" << endl;
                cin >> length;
                sqr.setLength(length);
                cout << "The area of the square with length " << length << " is: " << Area::getAreaOfSquare(sqr) << endl;
                break;
            }
            case 3:
            {
                shapes::Triangle tri;
                double base; double height;
                cout << "Enter the base of the triangle" << endl;
                cin >> base;
                tri.setBase(base);
                cout << "Enter the height of the triangle" << endl;
                cin >> height;
                tri.setHeight(height);
                cout << "The are of the triangle with base " << base << "and height " << height << " is: " << Area::getAreaOfTriangle(tri) << endl;
                break;
            }
            case 4:
            {
                quit = true;
                break;
            }
            default:
                break;
            }
        }
        else
        {
            cout << "Please choose the write option" << endl;
        }
    }
}
