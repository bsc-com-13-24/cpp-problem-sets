#pragma once

namespace shapes
{
    class Triangle
    {
    private:
        double base;
        double height;

    public:
        Triangle();
        Triangle(double r);
        ~Triangle();

        void setBase(double base);
        void setHeight(double height);
        double getBase();
        double getHeight();
    };
}