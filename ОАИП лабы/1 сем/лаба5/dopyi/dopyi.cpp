#include<iostream>
#include <string>
void main() {
	using namespace std;
	setlocale(LC_ALL, "Russian");
	float p, i, n, q;

	cout << "\nДоп второй";
	cout << "\nВведите выручку в первый день = " << endl;
	cin >> p;
	cout << "\nВведите значение конечной выручки = ";
	cin >> q;
	int n_1 = 1;
	do {
		p = (p / 100) * 3 + p;
		n_1 = n_1 + 1;

	} while (p <= q);
	cout << "\nВыручка будет составлять" << " " << p << " " << "тысяч рублей" << endl;
	cout << "\nФирме придется торговать = " << n_1 << "дня" << endl;




	cout << "Задание 6" << endl;
	string str;
	int k, b;
	cout << ("введите k = ");
	cin >> k;

	for (int f = 0; f < k; f++) {
		b = pow(2, f);
		str.append(to_string(b));
	}
	cout << str << endl << endl;
	cout << "k-й элемент в последовательности = " << str[k - 1];
	

	cout << "\nДоп седьмой";
	for (int k = 1; k < 10; ++k)
		for (int o = 0; o < 10; ++o)
			for (int t = 0; t < 10; ++t) {
				if ((k * 100 + t * 10 + o) + (k * 100 + o * 10 + t) == (t * 100 + o * 10 + k))
					cout << "\nKТО+KOT=TOK " << k * 100 + t * 10 + o << '+' << k * 100 + o * 10 + t << '=' << t * 100 + o * 10 + k << endl;
			}

}

/////////////////////////////////////////////////////////////////////////////////////////