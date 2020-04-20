#include <iostream>
#pragma once

using std::string;
using std::ostream;
using std::istream;

class Student
{
private:
	//ѧ��
	long long no;
	//����
	char name[8];
	//�Ա�:'m'->Male, 'f'->Female
	char gender;
	//רҵ
	char major[15];
	//�绰����
	char phoneNumber[12];
	//��ַ
	char address[30];
public:
	Student();
	void WriteToFile(string fileName);
	friend ostream& operator<<(ostream& out, const Student& stu);
	friend istream& operator>>(istream& in, Student& stu);
	static Student ReadFromFile(string fileName);
};

