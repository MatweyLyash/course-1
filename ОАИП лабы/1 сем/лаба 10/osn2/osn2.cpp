#include <iostream> 
#include <bitset>
#include <climits>
#include <iostream>
#include <limits>
using namespace std;


//int main()
//{
//
//	setlocale(LC_CTYPE, "Russian");
//	//char tmp[33];
//	//int A, n = 5, m = 0, B;
//	//int  maskA;
//	//cout << "Первое число="; cin >> A;
//	//cout << "Второе число="; cin >> B;
//
//	//_itoa_s(A, tmp, 2); cout << "A=" << tmp << endl;
//
//	//_itoa_s(B, tmp, 2); cout << "B=" << tmp << endl;
//
//	//maskA = A & (15 << n);
//	//_itoa_s(maskA, tmp, 2);
//	//cout << "Маска для А: " << tmp << endl;
//	//B |= (maskA >> n) << m;
//	//_itoa_s(B, tmp, 2);
//	//cout << "Число B равно " << tmp << endl;
//
//}



void task2(int A, int n) {
	char tmp[33];
	int B, m;
	int x;
	cout << "Число В= ", cin >> B;
	cout << "Сколько битов Вы хотите взять из числа А? " << endl;
	cin >> x;
	cout << "Введите позицию в которую должены добавляться биты: ", cin >> m;
	int num = pow(2, x) - 1;
	int maskA = num * pow(2, n); // для смещения маски 7 - 111 в двоичной с/с, 7 * 2^n, 2^n количество нулей после 111, чтобы сдвинуть маску 
	int maskAB = num * pow(2, m); // все тоже самое что и сверху, но для маски B
	int maskB = ~maskAB; // сама маска  В с перевернутыми значениями 
	_itoa_s(A, tmp, 2);
	cout << "A= " << tmp << endl;
	_itoa_s(B, tmp, 2);
	cout << "B= " << tmp << endl;
	_itoa_s((A & maskA) >> n, tmp, 2);
	cout << "Выделенные биты А: " << tmp << endl;

	_itoa_s(((B & maskB) | ((A & maskA) >> n) << m), tmp, 2);
	cout << "Результат B= " << tmp << endl;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	char tmp[33];
	int A, B, n, p, m, q, mask, maskB, X;
	cout << "Первое число="; cin >> A;
	X = A;
	//_itoa_s(A, tmp, 2); cout << "A=" << tmp << endl;


	cout << "От какой позиции влево Вы хотите установить 1? " << endl;
	cin >> p;
	cout << "Сколько битов Вы хотите установить?" << endl;
	cin >> n;
	mask = (((1 << n) - 1));
	_itoa_s(mask, tmp, 2); cout << "maska=" << tmp << endl;
	mask = ((1 << n) - 1) << p;

	_itoa_s(mask, tmp, 2); cout << "maska=" << tmp << endl;


	A |= mask;
	_itoa_s(A, tmp, 2);
	cout << "novaya A=" << tmp << endl;

	task2(X, p);
}


