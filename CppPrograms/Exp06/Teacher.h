#pragma once
#include "Person.h"
class Teacher : virtual public Person
{
private:
	//����
	uint jobNumber;
	//ְ��
	string rank;
	//����
	float salary;
protected:
	uint GetJobNumber() const;
	void SetJobNumber(uint number);
	string GetRank() const;
	void SetRank(uint rank);
	float GetSalary() const;
	void SetSalary(float salary);
public:
	Teacher();
	virtual ~Teacher();
	virtual void PrintData() const;
	virtual void Edit();
	virtual void SetData(char flag);
	virtual void LoopSetData();
};

