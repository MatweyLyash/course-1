#include <iostream> 
#include <bitset>
#include <climits>
#include <iostream>
#include <limits>
using namespace std;
int main()
{


	setlocale(LC_CTYPE, "Russian");
	//мой вариант 
	int A; char tmp[33];
	cout << "Введите число А" << endl;
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << " Число А: " << tmp << endl;
	_itoa_s(0xAAAAAAAA, tmp, 2);
	//55555555 AAAAAAAA
	cout << " Маска для А: " << tmp << endl;
	_itoa_s(A | 0xAAAAAAAA, tmp, 2);
	//55555555 15555AAAA
	cout << " Результат: " << tmp << endl << endl;


	char tmp[33];
	int A, n = 0, m = 0, B;
	cout << "Первое число="; cin >> A;
	cout << "Второе число="; cin >> B;

	_itoa_s(A, tmp, 2); cout << "A=" << tmp << endl;

	_itoa_s(B, tmp, 2); cout << "B=" << tmp << endl;
	cout << "Начиная с какого бита Вы хотите извлечь 3 бита числа А относительно права?" << endl;
	cin >> n;
	cout << "Начиная с какой позиции Вы хотите вставить в число В три бита А относительно права?" << endl;
	cin >> m;
	int maskA = 7 * pow(2, n); // для смещения маски 7 - 0111  
	int maskAB = 7 * pow(2, m); // dля маски B
	int maskB = ~maskAB; //  маска  В с перевернутыми значениями 
	_itoa_s((A & maskA) >> n, tmp, 2);
	cout << "Выделенные биты А: " << tmp << endl;
	_itoa_s(((B & maskB) | ((A & maskA) >> n) << m), tmp, 2);
	cout << "Результат B= " << tmp << endl;


	
	

	}


