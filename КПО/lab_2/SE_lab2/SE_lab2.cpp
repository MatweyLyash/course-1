//подписка на канал(анал)
#include <iostream>
using namespace std;
int ho_ho_ho()
{

	cout << "матушка жива";
	return 0;
}


int main()
{
	setlocale(LC_CTYPE, "rus");
	
	short X = 9 + 10;
	short minusX = -1*(9 + 10);
	bool one = false;
	bool two = true;
	char secondName = 'y';
	char secondLetter = 'я';
	wchar_t firstName = L'L';
	wchar_t firstLetter = L'Л';
	int a = SHRT_MIN;
	int A = SHRT_MAX;
	

	unsigned short b = USHRT_MAX;

	cout << A << endl;
	cout << b << endl;
	unsigned short B = 0;
	int Y = 10 + 11;
	int minusY = -1 * (10 + 11);
	int C = INT_MAX;
	int c = INT_MIN;
	unsigned int D = UINT_MAX;
	unsigned int d = 0;
	long Z = 11 + 11;
	long minusZ = -1 * (11 + 11);
	long E = LONG_MAX;
	long e = LONG_MIN;
	unsigned long F = ULONG_MAX;
	unsigned long f = 0;
	float S = 1.0 + 11;
	float minusS = -1 * (1.0 + 11);
	float j = 1;
	float i = -1;
	float l= -10;
	cout << j / 0<<endl;
	cout << i / 0<<endl;
	cout << sqrt(l)<<endl;
	char *ptr_char = &secondName;
	wchar_t* ptr_wchar = &firstName;
	short* ptr_short = &X;
	int* ptr_int = &Y;
	float* ptr_float = &S;
	ptr_char += 3;
	ptr_wchar += 3;
	ptr_short += 3;
	ptr_int += 3;
	ptr_float += 3;

	double Do = 34.54;

	double* ptr_double = &Do;

	int (*ptr_hohoho)() = ho_ho_ho;
	ptr_hohoho();
	
	

}



























































