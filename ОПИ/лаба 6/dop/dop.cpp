#include <iostream>
#include "Header.h"
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	
	cout << "\nПосадил дед репку.";
	cout << "\nВырасла она большая-пребольшая.";
	cout << "\nНачал он её тянуть, да не вытянул.";
	cout << "\nПозвал бабку.";
	fun1();
	cout << "\nПозвали они внучку.";
	fun1();
	cout << "\nПозвали Жучку.";
	fun1();
	cout << "\nПозвали кошку.";
	fun1();
	cout << "\nПозвали мышку.";
	cout << "\nТянут потянут, да и вытянули репку.";

}