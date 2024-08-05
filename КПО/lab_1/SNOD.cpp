#include  "stdafx.h"
bool visokos(int years);

int SNOD( int days, int month, int years)
{
	int einfachDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int unEinfachDays[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int serialNumberOfDay = 0;
	if (visokos(years)==1)
	{
		for (int i = 0; i < (month - 1); i++)
		{
			serialNumberOfDay += unEinfachDays[i];
		}
		serialNumberOfDay += days;
		
	}
	else
	{
		for (int i = 0; i < (month - 1); i++)
		{
			serialNumberOfDay += einfachDays[i];
		}
		serialNumberOfDay += days;
		
	}
	return serialNumberOfDay;

}