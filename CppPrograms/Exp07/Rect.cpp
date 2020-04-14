#include <iostream>
#include "Rect.h"
#include "LittleToolkit.h"

Rect::Rect(float width, float height) : width(width), height(height)
{
}

Shape2D* Rect::Copy() const
{
	return new Rect(width, height);
}

float Rect::GetArea() const
{
	return width * height;
}

float Rect::GetGirth() const
{
	return 2 * (width + height);
}



void Rect::PrintData() const
{
	PrintPair("����: ��: ", height);
	PrintPair(" ��: ", width);
	PrintPair(" ���: ", GetArea());
	PrintPair(" �ܳ�: ", GetGirth());
}

void Rect::Input()
{
	cout << "�������:\n>";
	std::cin >> width;
	cout << "�����볤:\n>";
	std::cin >> height;
}
