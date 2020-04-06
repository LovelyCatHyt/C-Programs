#include "Teacher.h"
#include <iostream>
#include "../ColorfulConsole/TextAttribute.h"

using std::cout;
using std::endl;
using std::cin;
using WTA = ColorfulConsole::TextAttribute::WarpedTextAttr;

uint Teacher::GetJobNumber() const
{
	return jobNumber;
}

void Teacher::SetJobNumber(uint number)
{
	jobNumber = number;
}

string Teacher::GetRank() const
{
	return rank;
}

void Teacher::SetRank(uint rank)
{
	this->rank = rank;
}

float Teacher::GetSalary() const
{
	return salary;
}

void Teacher::SetSalary(float salary)
{
	this->salary = salary;
}

Teacher::Teacher(): Person()
{
	jobNumber = 0;
	rank = "[Empty]";
	salary = 0;
}

Teacher::~Teacher()
{
	//DoNothing
}

void Teacher::PrintData() const
{
	WTA gray = WTA::WHITE;
	WTA white = WTA::WHITE;
	gray.fore_Intense = false;
	cout << "����:��ʦ" << gray << " ����:" << white << name << gray << " ����:" << white << age << gray << " �Ա�:" << white << gender
		<< gray << " ����:" << white << jobNumber << gray << " ְ��:" << white << rank << " ����:" << white << salary;
}

void Teacher::Edit()
{
	char flag;
	cout << WTA::LIGHTBLUE << "��ѡ��Ҫ�༭����Ŀ:\n" << WTA::WHITE
		<< "[a]����\n"
		"[b]����\n"
		"[c]�Ա�\n"
		"[d]����\n"
		"[e]ְ��\n"
		"[f]����\n>";
	cin >> flag;
	SetData(std::tolower(flag));
}

void Teacher::SetData(char flag)
{
	if (flag < 'd')
	{
		Person::SetData(flag);
	}
	else
	{
		switch (flag)
		{
		case 'd':cout << "�����빤��:\n>";	cin >> jobNumber;	cout << "����Ϊ:" << jobNumber << '\n';	break;
		case 'e':cout << "������ְ��:\n>";	cin >> rank;		cout << "ְ��Ϊ:" << rank << '\n';		break;
		case 'f':cout << "�����빤��:\n>";	cin >> salary;		cout << "����Ϊ:" << salary << '\n';		break;
		default:
			cout << WTA::LIGHTRED << "δ֪����. ��ǰ��:Teacher";
			break;
		}
	}
}

void Teacher::LoopSetData()
{
	for (int i = 0; i < 6; i++) SetData('a' + i);
}
