#include "Triangle.h"

Triangle::Triangle(Point p, double side1, double side2, double angle_between) : Point(p)
{
    this->side1 = side1;
    this->side2 = side2;
    this->angle_between = angle_between;
}

Triangle::Triangle(int x, int y, double side1, double side2, double angle_between) : Point(x, y)
{
    this->side1 = side1;
    this->side2 = side2;
    this->angle_between = angle_between;
}

void Triangle::setSide1(double side1)
{
    this->side1 = side1;
}

void Triangle::setSide2(double side2)
{    
    this->side2 = side2;
}

void Triangle::setAngleBetween(double angle_between)
{
    this->angle_between = angle_between;
}

double Triangle::getSide1() const
{
    return side1;
}

double Triangle::getSide2() const
{
    return side2;
}

double Triangle::getAngleBetween() const
{
    return angle_between;
}

double Triangle::getTrianglesArea() const
{
    return 0.5 * side1 * side2 * sin(angle_between); // S = 1/2 a b sin(alpha)
}

void Triangle::showTriangle() const
{
    Point::showPoints();
    cout << "\nПервая сторона: " << side1;
    cout << "\nВторая сторона: " << side2;
    cout << "\nУгол между сторонами: " << angle_between;
}
