#pragma once
//ר������͵���������, һ��#include�൱��һ��#include
#include <iostream>
#include "../ColorfulConsole/TextAttribute.h"

using WTA = ColorfulConsole::TextAttribute::WarpedTextAttr;
using std::string;
using std::cout;

//�ѳ����ĸ�ʽ����д�ɺ���, �ô��뿴������һ��
inline void PrintPair(string lable, float value)
{
	cout << WTA::LIGHTBLUE << lable << WTA::WHITE << value;
}