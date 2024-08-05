#include <iostream>
#include <stdio.h>
#include <sstream>
#include<typeinfo>
using namespace std;

inline int calculator() {
	int i;
	float number_1, number_2;
	float total{};
	string end; // инициализация переменной end для создания вариативности при окончании выполнения арифметической операции 
	char operation;// инициализация переменной operation для использования перехода в один из выбранный пользователем case
	setlocale(LC_CTYPE, "rus");
	cout << "Введите первое число: ";
	cin >> number_1;//ввод переменной number_1 ( Вводите, пожалуйста, именно число, а то мой тестер вводил буквы и хотел, чтобы я создал условие для таких случаев. Типо, "вы ввели некорректное значение", но я не знаю, как это реализовать:( )
	cout << endl;
	for (i = 0; i < 1000; i++)//цикл for реализован для возможности исполнения нескольких последовательных арифметических операций с числом
	{
		cout << "Выберите операцию, которую хотите провести с числом." << endl;
		cout << "+\n-\n*\n/\n^\n%" << endl;
		cout << endl;
		cin >> operation;//ввод символа для выбора операции над числом
		if (operation != '+' && operation != '-' && operation != '*' && operation != '/' && operation != '^' && operation != '%')//условие для реализации вывода "Некоректная операция." в случае, если пользователь ошибся с введённой. 
		{
			cout << "Некоректная операция." << endl;
			return(0);//окончание работы программы
		}
		else
			cout << endl;
		switch (operation)
		{
		case '+': {
			if (i >= 1)//данное условие создано для случая, когда пользователь выберет повторно данную операцию.Значения прошлого total будет равно number_1
			{
				number_1 = total;
			}
			cout << "Введите второе число: ";
			cin >> number_2; // ввод переменной number_2
			total = number_1 + number_2;//реализация суммы
			if (total >= pow(3.4, 38) || total <= pow(-3.4, 37))//условие, ограничевающее вывод inf, т.к. данное число будет некорректно использоваться в последующих операциях  
			{
				cout << "Число не поддерживается" << endl;
				return(0);
			}
			cout << "Сумма чисел равна: " << total << endl;//вывод суммы
			cout << "чтобы закончить вычисления введите end, иначе введите next. " << endl;
			cin >> end;//выбор следующего посредством ввода переменной end
			if (end == "end")//читаем cout выше
			{
				return (0);
			}
			else if (end == "next")//cout выше
			{
				break;// переход для реализации последующих арифметических действий с числом total
			}
			else
			{
				cout << "Некорректный ввод." << endl;
				cout << "Калькулятор не прощает ошибок." << endl;
				return(0);
			}
		}
		case'-': {
			if (i >= 1)//строка 33
			{
				number_1 = total;
			}
			cout << "Введите второе число: ";
			cin >> number_2;
			total = number_1 - number_2;//реализация разности
			if (total >= pow(3.4, 38) || total <= pow(-3.4, 37))//строка 40
			{
				cout << "Число не поддерживается" << endl;
				return(0);
			}
			cout << "Разность чисел равна: " << total << endl;//вывод разности
			cout << "чтобы закончить вычисления введите end, иначе введите next. " << endl;
			cin >> end;
			if (end == "end")
			{
				return (0);
			}
			else if (end == "next")
			{
				break;
			}
			else {
				cout << "Некорректный ввод." << endl;
				cout << "Калькулятор не прощает ошибок." << endl;
				return(0);
			}
			break;
		}
		case'*': {
			if (i >= 1)
			{
				number_1 = total;
			}
			cout << "Введите второе число: ";
			cin >> number_2;
			total = number_1 * number_2;//реализация произведения
			if (total >= pow(3.4, 38) || total <= pow(-3.4, 37))
			{
				cout << "Число не поддерживается" << endl;
				return(0);
			}
			cout << "Произведение чисел равно: " << total << endl;
			cout << "чтобы закончить вычисления введите end, иначе введите next. " << endl;
			cin >> end;
			if (end == "end")
			{
				return (0);
			}
			else if (end == "next")
			{
				break;
			}
			else
			{
				cout << "Деление на ноль недопустимо." << endl;
				return(0);
			}
		}
		case'/': {
			if (i >= 1)
			{
				number_1 = total;
			}
			cout << "Введите второе число: ";
			cin >> number_2;
			if (number_2 == 0)//условие для пользователей, которым взбредёт поделить некоторое число на ноль
			{
				cout << "На ноль делить нельзя";
				return(0);
			}
			total = number_1 / number_2;//реализация частного
			if (total >= pow(3.4, 38) || total <= pow(-3.4, 37))
			{
				cout << "Число не поддерживается" << endl;
				return(0);
			}
			cout << "Частное чисел равно: " << total << endl;
			cout << "чтобы закончить вычисления введите end, иначе введите next. " << endl;
			cin >> end;
			if (end == "end")
			{
				return (0);
			}
			else if (end == "next")
			{
				break;
			}

			else {
				cout << "Некорректный ввод." << endl;
				cout << "Калькулятор не прощает ошибок." << endl;
				return(0);
			}
		}
		case'^'://данная операция была выбрана как более гибкая, нежели квадратный корень. Чтобы посчитать корень некоторого числа, нужно ввести значение больше нуля, но меньшего за единицу
		{
			if (i >= 1)
			{
				number_1 = total;
			}
			cout << "Введите второе число: ";
			cin >> number_2;
			total = pow(number_1, number_2);
			if (total >= pow(3.4, 38) || total <= pow(-3.4, 37))
			{
				cout << "Число не поддерживается" << endl;
				return(0);
			}
			cout << "Результат возведения в степень: " << total << endl;
			cout << "чтобы закончить вычисления введите end, иначе введите next. " << endl;
			cin >> end;
			if (end == "end")
			{
				return (0);
			}
			else if (end == "next")
			{
				break;
			}
			else
			{
				cout << "Некорректный ввод." << endl;
				cout << "Калькулятор не прощает ошибок." << endl;
				return(0);
			}
		}
		case'%': {
			if (i >= 1)
			{
				number_1 = total;
			}
			cout << "Введите второе число: ";
			cin >> number_2;
			if (number_2 == -0)//условие для случая, если пользователь ввести отрицательный ноль, ведь тогда выведиться отрицательное значение: "total = -0"
			{
				number_2 = 0;
			}
			total = (number_1 / 100) * number_2;
			if (total >= pow(3.4, 38) || total <= pow(-3.4, 37))
			{
				cout << "Число не поддерживается" << endl;
				return(0);
			}
			cout << number_2 << "% от " << number_1 << " равно: " << total << endl;
			cout << "чтобы закончить вычисления введите end, иначе введите next. " << endl;
			cin >> end;
			if (end == "end")
			{
				return (0);
			}
			else if (end == "next")
			{
				break;
			}
			else
			{
				cout << "Некорректный ввод." << endl;
				cout << "Калькулятор не прощает ошибок." << endl;
				return(0);
			}
		}
		}
	}
	return 0;
}

