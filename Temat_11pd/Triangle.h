#pragma once
#include "Point.h"
#include <cmath> // для площади

class Triangle :
    public Point
{
protected:
    double side1;
    double side2;
    double angle_between;

public:
    Triangle(Point p, double side1, double side2, double angle_between);
    Triangle(int x, int y, double side1, double side2, double angle_between);

    void setSide1(double side1);
    void setSide2(double side2);
    void setAngleBetween(double angle_between);

    double getSide1()const;
    double getSide2()const;
    double getAngleBetween()const;
    double getTrianglesArea()const;


    void showTriangle()const;
};

