#pragma once

namespace shapes
{
    class Square
    {
    private:
        double length;

    public:
        Square();
        Square(double l);
        ~Square();

        // accessor methods
        void setLength(double length);
        double getLength();
    };
}
