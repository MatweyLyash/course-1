#include <iostream>
using namespace std;

void task2(int A, int x) {
	char tmp[33];
	int B, n, m;
	cout << "Число В= ", cin >> B;
	cout << "Введите позицию, с которой должены браться биты из числа А, до его изменения: ", cin >> n;
	cout << "Введите позицию, в которую должены вставляться биты в число В: ", cin >> m;
	int num = pow(2, x) - 1;
	int maskA = num * pow(2, n); // для смещения маски 7 - 111 в двоичной с/с, 7 * 2^n, 2^n количество нулей после 111, чтобы сдвинуть маску 
	int maskAB = num * pow(2, m); // все тоже самое что и сверху, но для маски B
	int maskB = ~maskAB; // сама маска  В с перевернутыми значениями 
	_itoa_s(A, tmp, 2);
	cout << "A= " << tmp << endl;
	_itoa_s(B, tmp, 2);
	cout << "B= " << tmp << endl;
	
	

	_itoa_s(((B & maskB) | ((A & maskA) >> n) << m), tmp, 2);
	cout << "Результат B= " << tmp << endl;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	char tmp[33];
	int A, B, n, p, m, q, mask, maskB, X;
	cout << "Первое число="; cin >> A;
	_itoa_s(A, tmp, 2); cout << "В двоичном виде:" << tmp << endl;
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

	task2(X, n);
}


