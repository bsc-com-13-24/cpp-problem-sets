#pragma once

namespace shapes
{
    class Circle
    {
    private:
        double radius;

    public:
        Circle();
        Circle(double r);
        ~Circle();

        void setRadius(double radius);
        double getRadius();
    };
}