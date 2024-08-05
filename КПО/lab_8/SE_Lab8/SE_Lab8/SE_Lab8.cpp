#include "defaultparm.h"
void main()
{
	setlocale(LC_CTYPE, "rus");
	int r1,r2;
	r1=defaultparm(1, 2, 3, 4, 5);
	cout << r1 << endl;
	r2 = defaultparm(1, 2, 3, 4, 5, 6, 7);
	cout << r2 << endl;
}