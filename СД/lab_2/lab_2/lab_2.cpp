#include <iostream>
#include<string>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "rus");
	char s;
	bool t = true;//буферная переменная, которая начинает цикл while.
	int min, max, middle, a;
	int i = 0, counter = 0;
	double step;

	cout << "Введите минимальное значение:" << endl;
	cin >> min;
	cout << "Введите максимальное значение:" << endl;
	cin >> max;
	middle = max - min;
	step = log2(middle);



	/*int round = round(step)*/;

	//данная формула используется для нахождения среднего значения в заданном промежутке. От него же будут оттакиваться дальнейшие действия в цикле while.
	int* chisla = new int[step];
	while (t)
	{
		a = (max + min) / 2;
		cout << "\nВаше число " << a << "?(m-загаданное число меньше, b-загаданное число больше, y-это загаданное число)" << endl;
		cin >> s;

		switch (s)
		{
		case'y':
		{
			chisla[counter] = a;
			counter++;
			cout << "Максимальное количество шагов при поиске числа:" << round(step) << "\n" << "Ваше число " << a << "\n";
			for (int i = 0; i < counter; i++)
			{
				cout << chisla[i] << endl;
			}
			return(0);
			break;
		}
		case'b':
		{
			min = a + 1;// происходит переинициализация переменной для последуюших вычислений
			chisla[counter] = a;
			counter++;
			break;
		}
		case'm':
		{
			max = a - 1;
			chisla[counter] = a;
			counter++;
			break;
		}
		}

	}

	delete[]chisla;
	return 0;
}