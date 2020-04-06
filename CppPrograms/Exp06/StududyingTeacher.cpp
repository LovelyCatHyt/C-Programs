#include "StududyingTeacher.h"
#include "Teacher.h"
#include "Student.h"
#include <iostream>
#include "../ColorfulConsole/TextAttribute.h"

using std::cout;
using std::endl;
using std::cin;
using WTA = ColorfulConsole::TextAttribute::WarpedTextAttr;

StududyingTeacher::StududyingTeacher():Teacher(),Student()
{
}

StududyingTeacher::~StududyingTeacher()
{
	//DoNothing
}

void StududyingTeacher::PrintData() const
{
	WTA gray = WTA::WHITE;
	WTA white = WTA::WHITE;
	gray.fore_Intense = false;
	cout << "����:�ڶ���ʦ" << gray << " ����:" << white << name << gray << " ����:" << white << age << gray << " �Ա�:" << white << gender
		<< gray << " ѧ��:" << white << stuNumber << gray << " �༶:" << white << classNumber << " רҵ:" << major
		<< gray << " ����:" << white << GetJobNumber() << gray << " ְ��:" << white << GetRank() << " ����:" << white << GetSalary();
}

void StududyingTeacher::Edit()
{
	char flag;
	cout << WTA::LIGHTBLUE << "��ѡ��Ҫ�༭����Ŀ:\n" << WTA::WHITE
		<< "[a]����\n"
		"[b]����\n"
		"[c]�Ա�\n"
		"[d]ѧ��\n"
		"[e]�༶\n"
		"[f]רҵ\n"
		"[g]��ѧ�ɼ�\n"
		"[h]����\n"
		"[i]ְ��\n"
		"[j]����\n>";
	cin >> flag;
	SetData(std::tolower(flag));
}

void StududyingTeacher::SetData(char flag)
{
	if (flag < 'h')
	{
		Student::SetData(flag);
	}
	else if (flag < 'k')
	{
		Teacher::SetData(flag - 4);
	}
	else
	{
		cout << WTA::LIGHTRED << "δ֪����. ��ǰ��:StudyingTeacher";
	}
}

void StududyingTeacher::LoopSetData()
{
	for (int i = 0; i < 10; i++) SetData('a' + i);
}
