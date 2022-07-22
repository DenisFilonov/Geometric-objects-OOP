#pragma once
#include "Point.h"
class Rectangle :
    public Point
{
protected:
    double width;
    double height;

public:
    Rectangle(Point p, double width, double height);
    Rectangle(int x, int y, double width, double height);

    void setWidth(double width);
    void setHeight(double height);

    double getWidth()const;
    double getHeight()const;
    double getRectanglesArea()const;

    void showRectangle()const;
};

