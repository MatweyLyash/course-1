#include "call.h"
using namespace call;

void main() 
{
	setlocale(LC_CTYPE, "rus");
	int r1, r2, r3;
	int a, b, c;
	int d, e, f;
	int g, h, i, j;
	cout << "Введите 3 значения для функции с соглашением cdecl" << endl;
	cin >> a >> b >> c;
	r1 = funA(a, b, c );
	cout << "Введите 3 значения для функции с соглашением stdcall" << endl;
	cin >> d>> e>> f;
	r2 = funB(d, e, f);
	cout << "Введите 4 значения для функции с соглашением fastcall" << endl;
	cin >> g >> h >> i >> j;
	r3 = funC(g, h, i, j);
	cout << r1 << " " << r2 << " " << r3;
}