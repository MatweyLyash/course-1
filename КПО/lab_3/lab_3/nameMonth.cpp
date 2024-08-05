
#include "stdafx.h"
string nameMonth(int month)//формальные параметры
{
	string numberM[12] = { "Январь","Февраль","Март","Апрель","Май","Июнь","Июль","Август","Сентябрь","Октябрь","Ноябрь","Декабрь" };
	return numberM[month - 1];
}