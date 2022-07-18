#include "Circle.h"

Circle::Circle(Point p, double radius) : Point(p)
{
    this->radius = radius;
}

void Circle::setRadius(double radius)
{
    this->radius = radius;
}

double Circle::getRadius() const
{
    return radius;
}

double Circle::getCirclesArea() const
{
    return 3.14 * (radius * radius); // S = п*r^2
}

void Circle::showCircle() const
{
    Point::showPoints();
    cout << "\nРадиус круга: " << radius;
}
