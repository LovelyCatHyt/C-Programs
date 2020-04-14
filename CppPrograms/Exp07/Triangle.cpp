#include "Triangle.h"
#include <cmath>
#include "LittleToolkit.h"

Triangle::Triangle(Point a, Point b, Point c):pA(a), pB(b), pC(c)
{
}

Shape2D* Triangle::Copy() const
{
	return new Triangle(pA, pB, pC);
}

float Triangle::GetArea() const
{
	return abs((pA.x * pB.y + pA.y * pC.x + pB.x * pC.y - pA.x * pC.y - pA.y * pB.x - pB.y * pC.x) / 2);
}

float Triangle::GetGirth() const
{
	return pA.Dis(pB) + pB.Dis(pC) + pC.Dis(pA);
}

void Triangle::PrintData() const
{
	cout << WTA::LIGHTBLUE << "������: ��������: " << WTA::LIGHTRED << '(' << pA << WTA::LIGHTRED << ')' << WTA::WHITE << ','
		<< WTA::LIGHTRED << '(' << pB << WTA::LIGHTRED << WTA::LIGHTRED << ')' << WTA::WHITE << ','
		<< WTA::LIGHTRED << '(' << pC << WTA::LIGHTRED << WTA::LIGHTRED << ')' << WTA::WHITE << ',' << WTA::WHITE;
	PrintPair(" �ܳ�: ", GetGirth());
	PrintPair(" ���: ", GetArea());
}

void Triangle::Input()
{
	cout << "�����������ε���������:";
	cout << "��" << WTA::LIGHTBLUE << 1 << WTA::WHITE << "��:";
	pA.Input();
	cout << "��" << WTA::LIGHTBLUE << 2 << WTA::WHITE << "��:";
	pB.Input();
	cout << "��" << WTA::LIGHTBLUE << 3 << WTA::WHITE << "��:";
	pC.Input();
}
