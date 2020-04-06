#pragma once
#include <string>
#include <ostream>
using std::string;
using std::ostream;
typedef unsigned int uint;
//��
class Person
{
protected:
	//����
	string name;
	//����
	uint age;
	//�Ա�
	string gender;
public:
	Person();
	virtual ~Person();
	string GetName();
	uint GetAge();
	string GetGender();
	//��ӡ����
	virtual void PrintData() const;
	//�༭����
	virtual void Edit();
	//���ݾ��������������
	virtual void SetData(char flag);
	//����ÿ�����ݽ�������
	virtual void LoopSetData();
	friend ostream& operator<<(ostream& out, const Person& person);
};

