#pragma once
#include "Shape2D.h"

//����
class Podetium
{
	Shape2D* base;
	float height;
public:
	Podetium();
	Podetium(Shape2D* base, float height);
	~Podetium();
	//����
	Shape2D* GetBase()const;
	//���õ���
	void SetBase(const Shape2D* base);
	//�߶�
	float GetHeight()const;
	void SetHeight(float height);
	//���
	float GetVolume()const;
	//�����
	float GetArea()const;
	//������Ϣ
	void Input();
	//��ӡ��Ϣ
	void PrintData()const;
};