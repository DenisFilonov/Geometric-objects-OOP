#include"Point.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"

int main()
{
	setlocale(NULL, "");


	Point sp(1, 2);
	Circle cr(sp, 20);
	Triangle tr(sp, 9, 9, 90);
	Rectangle rt(sp, 10, 20);

	cr.showCircle();
	cout << "\nПлощадь круга: " << cr.getCirclesArea();
	cout << "\n================================================================\n";

	tr.showTriangle();
	cout << "\nПлощадь треугольника: " << tr.getTrianglesArea();
	cout << "\n================================================================\n";

	rt.showRectangle();
	cout << "\nПлощадь прямоугольника: " << rt.getRectanglesArea();

	return 0;
}