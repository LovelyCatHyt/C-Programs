#pragma once
#include <ostream>
using std::ostream;
//2D��
class Point
{
public:
	float x, y;
	Point(float x = 0, float  y = 0);
	//�������
	float Dis(const Point& other) const;
	//�ӿ���̨��������
	void Input();
	//��ӡ����
	void Print() const;
};
ostream& operator<<(ostream& out, const Point& p);

