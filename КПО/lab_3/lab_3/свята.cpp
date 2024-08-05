#include"stdafx.h"


string svyata(int numDay,bool check)
{

	int numDaySvyaty[5] = { 294, 46, 1, 32, 69 };
	string nameSvyata[5] = { "День цемента","День всех одиноких","День откисона после НГ","День Величайшего Павла Пиво","День архивов" };
	if (check)
	{
		for (int i = 0; i < 5; i++)
		{
			numDaySvyaty[i] += 1;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		if(numDay==numDaySvyaty[i])
		{
			return nameSvyata[i];
		}
	
	}
	return "Праздника нет, поэтому не идём в ближайший алкомагазин(";

}