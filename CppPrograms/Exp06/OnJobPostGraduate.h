#pragma once
#include "Teacher.h"
#include "Student.h"

//��ְ�о���
class OnJobPostGraduate : public Student
{
protected:
	//������λ
	string workUnit;
public:
	OnJobPostGraduate();
	~OnJobPostGraduate();
	string GetWorkUnit();
	void PrintData() const;
	void Edit();
	void SetData(char flag);
	void LoopSetData();
};

