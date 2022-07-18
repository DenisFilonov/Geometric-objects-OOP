#include "Point.h"

Point::Point()
{
    x = 0;
    y = 0;
}

Point::Point(double x, double y)
{
    this->x = x;
    this->y = y;
}

double Point::Area()
{
    return 0;
}


void Point::setXPoint(double x)
{
    this->x = x;
}

void Point::setYPoint(double y)
{
    this->y = y;
}

double Point::getXPoint() const
{
    return this->x;
}

double Point::getYPoint() const
{
    return this->y;
}

void Point::showPoints() const
{
    cout << "\nКоордината X: " << x;
    cout << "\nКоордината Y: " << y;
}
