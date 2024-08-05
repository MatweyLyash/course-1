#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "rus");
	using namespace std;
	int t, f, k;
	cout << "Введите числовые значения k,f,t";
	cin >> k;
	cin >> f;
	cin >> t;

	if (k != 0 && f != 0 && t != 0) {
		if (k % f == 0 || f % k == 0) {
			cout << k << " " << f << endl;
		}
		if (f % t == 0 || t % f == 0) {
			cout << f << " " << t << endl;
		}
		if (k % t == 0 || t % k == 0) {
			cout << k << " " << t << endl;
		}
	}
	else {
		if ((k % f == 0) || (f % k == 0)) {
			cout << k << " " << f << endl;
		}
		if ((t > 0) && ((t % k == 0) || (k % t == 0))) {
			cout << t << " " << k << endl;
		}
		if ((t > 0) && (f > 0) && ((t % f == 0) || (f % t == 0))) {
			cout << t << " " << f << endl;
		}

	}
}