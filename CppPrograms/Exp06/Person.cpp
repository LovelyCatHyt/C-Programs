#include <iostream>
#include "Person.h"
#include "../ColorfulConsole/TextAttribute.h"

using std::cout;
using std::endl;
using std::cin;
using WTA = ColorfulConsole::TextAttribute::WarpedTextAttr;

Person::Person()
{
	name = "[Empty]";
	age = 0;
	gender = "[Empty]";
}

Person::~Person()
{
	//cout << "~Person() called. Name:" << name;
}

string Person::GetName()
{
	return name;
}

uint Person::GetAge()
{
	return age;
}

string Person::GetGender()
{
	return gender;
}

void Person::PrintData() const
{
	WTA gray = WTA::WHITE;
	WTA white = WTA::WHITE;
	gray.fore_Intense = false;
	cout << "����:��ͨ" << gray << " ����:" << white << name << gray << " ����:" << white << age << gray << " �Ա�:" << white << gender;
}
void Person::Edit()
{
	char flag;
	cout << WTA::LIGHTBLUE << "��ѡ��Ҫ�༭����Ŀ:\n" << WTA::WHITE
		<< "[a]����\n"
		"[b]����\n"
		"[c]�Ա�\n>";
	cin >> flag;
	SetData(flag);
}

void Person::SetData(char flag)
{
	switch (flag)
	{
	case 'a':
		cout << "����������:\n>";
		cin >> name;
		cout << "����Ϊ:" << name << '\n';
		break;
	case 'b':
		cout << "����������:\n>";
		cin >> age;
		cout << "����Ϊ:" << age << '\n';
		break;
	case 'c':
		cout << "�������Ա�:\n>";
		cin >> gender;
		cout << "�Ա�Ϊ:" << gender << '\n';
		break;
	default:
		cout << WTA::LIGHTRED << "δ֪�༭����. ������:Person";
	}
}

void Person::LoopSetData()
{
	for (int i = 0; i < 3; i++) SetData('a' + i);
}

ostream& operator<<(ostream& out, const Person& person)
{
	person.PrintData();
	return out;
}
