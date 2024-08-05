﻿#include <fstream>
#include<iostream>
using namespace std;
inline int tablelist()
{
	setlocale(LC_ALL, "rus");
	int number, number_weak, number_gr;// объявление переменных (номер лня недели, номер недели, номер группы)
	cout << "Введите номер подгруппы" << endl;// вывод(Введите номер подгруппы)
	cin >> number_gr;// Ввод номера группы
	if (number_gr > 2) {// Вывод ошибки при вводе числа больше 2

		cout << "Вы ввели некоректное значение";
	}
	switch (number_gr) { // выбор номера группы с помощью switch
	case 1: { // Вычисление дня недели при вводе 1 группы
		cout << "Введите номер недели" << endl;
		cin >> number_weak;// Ввод номера недели 1 или 2
		if (number_weak == 1) { // Проверка реальности введённых данных
			cout << "Введите номер дня недели" << endl;
			cin >> number;//Ввод номера дня недели
			if (number < 7) { // Проверка на реальность введённых данных
				switch (number) {
				case 1: {
					cout << "16:30-17:50| пз Физическая культура" << endl;
					cout << "18:05-19:25| лк Компрьютерные языки разметки" << endl; break; }
				case 2: {
					cout << "18:05-19:25| лк Основы программной инженерии" << endl;
					cout << "19:40-21:00| лк ВоВ советской нации" << endl; break; }
				case 3: {
					cout << "14:40-16:00| лр Основы программной инженерии" << endl;
					cout << "16:30-17:50| лр Компьютеные языки разметки" << endl;
					cout << "18:05-19:25| лк Линейная алгебра и аналитическая геометрия" << endl;
					cout << "19:40-21:00| пз Английский язык" << endl; break; }
				case 4: {
					cout << "14:40-16:00| лк Основы алгоритмизации и программирования" << endl;
					cout << "16:30-17:50| пз Физическая культура" << endl;
					cout << "18:05-19:25| пз Математический анализ" << endl; break; }
				case 5: {
					cout << "14:40-16:00| лк Арифметико-логические основы вычислительных систем" << endl;
					cout << "16:30-17:50| пз Белорусский язык" << endl;
					cout << "18:05-19:25| пз Линейная алгебра" << endl;
					cout << "19:40-21:00| лр Основы алгоритмизации и программирования" << endl; break; }

				case 6: {
					cout << "13:00-14:20| пз Математический анализ" << endl;
					cout << "14:40-16:00| лк Математический анализ" << endl;
					cout << "16:30-17:50| пз Английский язык" << endl; break; }
				}
			}
			else { // Вывод при неверном вводе
				cout << "Введен неверный номер дня недели" << endl;
				return 0;
			}
		}
		else {
			if (number_weak == 2) { // Проверка в случае введении второй недели
				cout << "Введите номер дня недели" << endl;
				cin >> number;
				if (number < 7) {
					switch (number) {
					case 1: {
						cout << "16:30-17:50| пз Физическая культура" << endl;
						cout << "18:05-19:25| лк Компрьютерные языки разметки" << endl; break; }
					case 2: {
						cout << "16:30-17:50| лб Основы алгоритмизации и программирования" << endl;
						cout << "18:05-19:25| лк Основы программной инженерии" << endl;
						cout << "19:40-21:00| пз Белорусский язык" << endl; break; }
					case 3: {
						cout << "14:40-16:00| лб Компрьютерные языки разметки" << endl;
						cout << "16:30-17:50| пз Английский язык" << endl;
						cout << "18:05-19:25| лк Линейная алгебра и аналитическая геометрия" << endl; break; }
					case 4: {
						cout << "14:40-16:00| лк Основы алгоритмизации и программирования" << endl;
						cout << "16:30-17:50| пз Физическая культура" << endl;
						cout << "18:05-19:25| лк Математический анализ" << endl; break; }
					case 5: {
						cout << "14:40-16:00| лк Арифметико-логические основы вычислительных систем" << endl;
						cout << "16:30-17:50| пз Арифметико-логические основы вычислительных систем" << endl;
						cout << "18:05-19:25| пз Линейная алгебра" << endl;
						cout << "19:40-21:00| пз Английский язык" << endl; break; }

					case 6: {
						cout << "13:00-14:20| пз Математический анализ" << endl;
						cout << "14:40-16:00| лк Математический анализ" << endl; break; }
					}
				}
				else {
					cout << "Введено неверный номер дня недели";
					return 0;
				}
				}
				else { // Вывод при неверном вводе
					cout << "Введен неверный номер недели" << endl;
					return 0;
				}
				break;

			}
		}
	case 2: { // Вычисление дня недели при вводе 2 недели
		cout << "Введите номер недели" << endl;
		cin >> number_weak;
		if (number_weak == 1) {
			cout << "Введите номер дня недели" << endl;
			cin >> number;
			if (number < 7) {
				switch (number) {
				case 1: {
					cout << "14:40-16:00| лб Основы программной инженерии" << endl;
					cout << "16:30-17:50| пз Физическая культура" << endl;
					cout << "18:05-19:25| лк Компрьютерные языки разметки" << endl; break; }
				case 2: {
					cout << "16:30-17:50| лб Основы алгоритмизации и программирования" << endl;
					cout << "18:05-19:25| лк Основы программной инженерии" << endl;
					cout << "19:40-21:00| лк ВоВ советской нации" << endl; break; }
				case 3: {
					cout << "14:40-16:00| лб Компрьютерные языки разметки" << endl;
					cout << "16:30-17:50| пз Английский язык" << endl;
					cout << "18:05-19:25| лк Линейная алгебра и аналитическая геометрия" << endl; break; }
				case 4: {
					cout << "14:40-16:00| лк Основы алгоритмизации и программирования" << endl;
					cout << "16:30-17:50| пз Физическая культура" << endl;
					cout << "18:05-19:25| пз Математический анализ" << endl; break; }
				case 5: {
					cout << "14:40-16:00| лк Арифметико-логические основы вычислительных систем" << endl;
					cout << "16:30-17:50| пз Белорусский язык" << endl;
					cout << "18:05-19:25| пз Линейная алгебра" << endl;
					cout << "19:40-21:00| пз Английский язык" << endl; break; }

				case 6: {
					cout << "13:00-14:20 пз Математический анализ" << endl;
					cout << "14:40-16:00 лк Математический анализ" << endl; break; }
				}
			}
			else {
				cout << "Введён неверный номер дня недели" << endl;
				return 0;
			}
		}
		else {
			if (number_weak == 2) {
				{ cout << "Введите номер дня недели" << endl;
				cin >> number;
				if (number < 7) {
					switch (number) {
					case 1: {
						cout << "14:40-16:00| лб Основы программной инженерии" << endl;
						cout << "16:30-17:50| пз Физическая культура" << endl;
						cout << "18:05-19:25| лк Компрьютерные языки разметки" << endl; break; }
					case 2: {
						cout << "16:30-17:50| лб Основы алгоритмизации и программирования" << endl;
						cout << "18:05-19:25| лк Основы программной инженерии" << endl;
						cout << "19:40-21:00| пз Белорусский язык" << endl; break; }
					case 3: {
						cout << "14:40-16:00| лб Компрьютерные языки разметки" << endl;
						cout << "16:30-17:50| пз Английский язык" << endl;
						cout << "18:05-19:25| лк Линейная алгебра и аналитическая геометрия" << endl; break; }
					case 4: {
						cout << "14:40-16:00| лк Основы алгоритмизации и программирования" << endl;
						cout << "16:30-17:50| пз Физическая культура" << endl;
						cout << "18:05-19:25| лк Математический анализ" << endl; break; }
					case 5: {
						cout << "14:40-16:00| лк Арифметико-логические основы вычислительных систем" << endl;
						cout << "16:30-17:50| пз Арифметико-логические основы вычислительных систем" << endl;
						cout << "18:05-19:25| пз Линейная алгебра" << endl;
						cout << "19:40-21:00| пз Английский язык" << endl; break; }

					case 6: {
						cout << "13:00-14:20| пз Математический анализs" << endl;
						cout << "14:40-16:00| лк Математический анализ" << endl; break; }
					}
				}
				else {
					cout << "Введен неверный номер дня недели" << endl;
					return 0;
				}
				}
			}
			else {
				cout << "Вы ввели некоректное значение" << endl;
				return 0;
			}
		}
		break; }
	}
	return 0;
}
