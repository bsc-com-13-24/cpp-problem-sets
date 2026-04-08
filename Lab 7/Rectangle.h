//class definition for Rectangle
#pragma once
#include <iostream>
using namespace std;

class Rectangle{
    private:
        float length;
        float width;

    public:
        Rectangle();        //default constructor
        Rectangle(float l, float w);   //parameterized constructor
        ~Rectangle();

        //accessor methods
        void setLength(float l);    

        void setWidth(float w);    

        float getLength();          

        float getWidth();         

        float area();            
};