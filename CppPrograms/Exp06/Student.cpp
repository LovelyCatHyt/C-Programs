#include <iostream>
#include "Student.h"
#include "../ColorfulConsole/TextAttribute.h"

using std::cout;
using std::endl;
using std::cin;
using WTA = ColorfulConsole::TextAttribute::WarpedTextAttr;

Student::Student() : Person()
{
	stuNumber = 0;
	classNumber = 0;
	major = "[Empty]";
	entranceScore = 0;
}

Student::~Student()
{
	//Do nothing
}

void Student::PrintData() const
{
	WTA gray = WTA::WHITE;
	WTA white = WTA::WHITE;
	gray.fore_Intense = false;
	cout << "����:ѧ��" << gray << " ����:" << white << name << gray << " ����:" << white << age << gray << " �Ա�:" << white << gender
		<< gray << " ѧ��:" << white << stuNumber << gray << " �༶:" << white << classNumber << " רҵ:" << major << gray << " ��ѧ�ɼ�:" << white << entranceScore;
}

void Student::Edit()
{
	char flag;
	cout << WTA::LIGHTBLUE << "��ѡ��Ҫ�༭����Ŀ:\n" << WTA::WHITE
		<< "[a]����\n"
		"[b]����\n"
		"[c]�Ա�\n"
		"[d]ѧ��\n"
		"[e]�༶\n"
		"[f]רҵ\n"
		"[g]��ѧ�ɼ�\n>";
	cin >> flag;
	SetData(std::tolower(flag));
}

void Student::SetData(char flag)
{
	if (flag < 'd')
	{
		Person::SetData(flag);
	}
	else
	{
		switch (flag)
		{
		case 'd':cout << "������ѧ��:\n>";			cin >> stuNumber;		cout << "ѧ��Ϊ:" << stuNumber << '\n';			break;
		case 'e':cout << "������༶(��λ��):\n>";	cin >> classNumber;		cout << "�༶Ϊ:" << classNumber << '\n';		break;
		case 'f':cout << "������רҵ:\n>";			cin >> major;			cout << "רҵΪ:" << major << '\n';				break;
		case 'g':cout << "��������ѧ�ɼ�:\n>";		cin >> entranceScore;	cout << "��ѧ�ɼ�Ϊ:" << entranceScore << '\n';	break;
		default:
			cout << WTA::LIGHTRED << "δ֪����. ��ǰ��:Student";
			break;
		}
	}
}

void Student::LoopSetData()
{
	for (int i = 0; i < 7; i++) SetData('a' + i);
}

