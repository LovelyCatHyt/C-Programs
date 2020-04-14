#include <cmath>
#include "Circle.h"
#include "LittleToolkit.h"

const double PI = 2 * acos(0);

Circle::Circle(float radius) : radius(radius)
{
}

Shape2D* Circle::Copy() const
{
	return new Circle(radius);
}

float Circle::GetArea() const
{
	return radius * radius * PI;
}

float Circle::GetGirth() const
{
	return 2 * radius * PI;
}

void Circle::PrintData() const
{
	PrintPair("Բ��: �뾶: ", radius);
	PrintPair(" ���: ", GetArea());
	PrintPair(" �ܳ�: ", GetGirth());
}

void Circle::Input()
{
	cout << "������Բ�İ뾶:\n>";
	std::cin >> radius;
}
