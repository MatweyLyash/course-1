
#include "stdafx.h"
string nameMonth(int month)//���������� ���������
{
	string numberM[12] = { "������","�������","����","������","���","����","����","������","��������","�������","������","�������" };
	return numberM[month - 1];
}