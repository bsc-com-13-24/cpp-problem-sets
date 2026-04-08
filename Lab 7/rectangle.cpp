#include <iostream>
#include "Rectangle.h"
using namespace std;

int main(){
    //exiting instance of the Rectangle class
    Rectangle rec;

    int length, width;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    rec.setLength(length);  

    cout << "Enter the width of the rectangle: ";
    cin >> width;
    rec.setWidth(width);    

    cout << "The area of the rectangle is: " << rec.area() << endl;


    cout << "\n\n-----------------------------" << endl;
    cout << "Now we will create a new instance of the Rectangle class using parameterized constructor" << endl;
    cout << "-----------------------------" << endl;
    //new instance of the Rectangle class using parameterized constructor

    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    Rectangle rec2(length, width);
    cout << "The area of the rectangle is: " << rec2.area() << endl;
    

    return 0;
}