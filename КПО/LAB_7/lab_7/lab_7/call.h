#pragma once
#include <iostream>
using namespace std;
namespace call
{
	int _cdecl funA(int a, int b, int c);//��� �������� ����������, � ������� ��������� ��������� ����� ������������ ����������, � ��������� ��������������� ��������
	int _stdcall funB(int&d, int e, int f);//��� �������� �� ������, � ������� ��������� ����� ���������� -> �� �������� ��������� ����� 
	int _fastcall funC(int g, int h, int i, int j);

}
