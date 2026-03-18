#include <iostream>
using namespace std;

double areaOfSquare(double sideLength)
{
    return sideLength * sideLength;
}

double areaOfRectangle(double length, double width)
{
    return length * width;
}

double areaOfTriangle(double base, double height)
{
    return 0.5 * base * height;
}

int main()
{
    bool isTrue = true;

    while (isTrue)
    {
        int choice;
        cout << "Please select the area of shape to calculate" << endl;
        cout << "1. Square\n2. Rectangle\n3. Triangle\n4. Quit Program\n";
        cout << "Enter selection: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            double sideLength;
            cout << "Enter any side length: ";
            cin >> sideLength;
            cout << "The area of the square is: " << areaOfSquare(sideLength) << endl;
            break;
        }
        case 2:
        {
            double length, width;
            cout << "Enter the value of length: ";
            cin >> length;
            cout << "Enter the value of width: ";
            cin >> width;
            cout << "The area of the rectangle is: " << areaOfRectangle(length, width) << endl;
            break;
        }
        case 3:
        {
            double base, height;
            cout << "Enter triangle base: ";
            cin >> base;
            cout << "Enter triangle height: ";
            cin >> height;
            cout << "The area of the triangle is: " << areaOfTriangle(base, height) << endl;
            break;
        }
    
        case 4:
            isTrue = false;
            break;
        default:
            cout << "Invalid selection. Try again." << endl;
            break;
        }
    }

    return 0;
}
