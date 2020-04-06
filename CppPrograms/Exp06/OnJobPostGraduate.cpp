#include "OnJobPostGraduate.h"
#include "Teacher.h"
#include "Student.h"
#include <iostream>
#include "../ColorfulConsole/TextAttribute.h"

using std::cout;
using std::endl;
using std::cin;
using WTA = ColorfulConsole::TextAttribute::WarpedTextAttr;

OnJobPostGraduate::OnJobPostGraduate():Teacher(),Student()
{
	workUnit = "[Empty]";
}

OnJobPostGraduate::~OnJobPostGraduate()
{
	//DoNothing
}

string OnJobPostGraduate::GetWorkUnit()
{
	return workUnit;
}

void OnJobPostGraduate::PrintData() const
{
	WTA gray = WTA::WHITE;
	WTA white = WTA::WHITE;
	gray.fore_Intense = false;
	cout << "����:��ְ�о���" << gray << " ����:" << white << name << gray << " ����:" << white << age << gray << " �Ա�:" << white << gender
		<< gray << " ѧ��:" << white << stuNumber << gray << " �༶:" << white << classNumber << " רҵ:" << major << gray << " ��ѧ�ɼ�:" << white << entranceScore
		<< gray << " ����:" << white << GetJobNumber() << gray << " ְ��:" << white << GetRank() << " ����:" << white << GetSalary()
		<< gray << " ������λ:" << white << workUnit;
}

void OnJobPostGraduate::Edit()
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
		"[j]����\n"
		"[k]������λ\n>";
	cin >> flag;
	SetData(std::tolower(flag));
}

void OnJobPostGraduate::SetData(char flag)
{
	if (flag < 'h')
	{
		Student::SetData(flag);
	}else if(flag < 'k')
	{
		Teacher::SetData(flag - 4);
	}
	else if(flag == 'k')
	{
		cout << "�����빤����λ:\n>";
		cin >> workUnit;
		cout << "רҵΪ:" << workUnit << '\n';
	}
	else
	{
		cout << WTA::LIGHTRED << "δ֪����. ��ǰ��:OnJobPostGraduate";
	}
}

void OnJobPostGraduate::LoopSetData()
{
	for (int i = 0; i < 11; i++) SetData('a' + i);
}
