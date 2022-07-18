#pragma once
#include "Point.h"
class Circle :
    public Point
{

protected:
    double radius;

public:
    Circle(Point p, double radius);
    
    void setRadius(double radius);
    double getRadius()const;
    double getCirclesArea()const;

    void showCircle()const;
};

