#pragma once
#include "Person.h"
#include "Student.h"
//ѧ��
class Student : virtual public Person
{
protected:
	//ѧ��
	uint stuNumber;
	//�༶
	unsigned short classNumber;
	//רҵ
	string major;
	//��ѧ�ɼ�
	float entranceScore;
public:
	Student();
	virtual ~Student();
	virtual void PrintData() const;
	virtual void Edit();
	virtual void SetData(char flag);
	virtual void LoopSetData();
};

