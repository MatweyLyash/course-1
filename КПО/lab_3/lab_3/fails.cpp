#include  "stdafx.h"
using namespace std;
bool fails(int days, int month) {
	if (days > 31 && month > 12)
	{
		cout << "Неверно введена дата\n";
		return false;
	}
	else
	{
		return true;
	}

}