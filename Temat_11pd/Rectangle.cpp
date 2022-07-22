#include "Rectangle.h"

Rectangle::Rectangle(Point p, double width, double height) : Point(p)
{
    this->width = width;
    this->height = height;
}

Rectangle::Rectangle(int x, int y, double width, double height) : Point(x, y)
{
    this->width = width;
    this->height = height;
}

void Rectangle::setWidth(double width)
{
    this->width = width;
}

void Rectangle::setHeight(double height)
{
    this->height = height;
}

double Rectangle::getWidth() const
{
    return this->width;
}

double Rectangle::getHeight() const
{
    return this->height;
}

double Rectangle::getRectanglesArea() const
{
    return width * height; // S = a * b
}

void Rectangle::showRectangle() const
{
    Point::showPoints();
    cout << "\nШирина: " << width;
    cout << "\nВысота: " << height;
}
