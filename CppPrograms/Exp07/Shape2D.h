#pragma once

//2D���򼸺���״
class Shape2D
{
public:
    //����������ͬ��һ��Shape2D
    virtual Shape2D* Copy()const = 0;
    //���
    virtual float GetArea()const = 0;
    //�ܳ�
    virtual float GetGirth()const = 0;
    //��ӡ��Ϣ
    virtual void PrintData()const = 0;
    //�ӿ���̨������Ϣ
    virtual void Input() = 0;
};