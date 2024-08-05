#include <iostream>
int getSum(int x, int y);
int getMul(int x, int y);
int parm1 = 2;
int parm2 = 3;
using namespace std;
void main(int argc, char* argv[]) 
{
	cout << "getSum(" << parm1 << "," << parm2 << ")=" << getSum(2, 3) << endl;
	parm1 = 5;
	parm2 = 5;
	cout << "getMul(" << parm1 << "," << parm2 << ")=" << getMul(2, 3) << endl;
	system("pause");
}