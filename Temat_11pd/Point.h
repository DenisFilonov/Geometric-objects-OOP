#pragma once
#include<iostream>
using namespace std;

class Point
{
protected:
	double x;
	double y;

public:
	Point();
	Point(double x, double y);

	double Area();

	void setXPoint(double x);
	void setYPoint(double y);

	double getXPoint()const;
	double getYPoint()const;

	void showPoints()const;
};

