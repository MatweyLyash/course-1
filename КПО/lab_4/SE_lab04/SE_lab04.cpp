#include <iostream>
using namespace std;
typedef unsigned char day;
typedef unsigned char month;
typedef unsigned short years;
struct DATE {
	day dd;
	month mm;
	years yyyy;
};
typedef string FIO;
typedef char old;
typedef string special;
typedef  unsigned char course;
typedef unsigned char group;
typedef unsigned char average;
typedef  char sex;
struct student 
{
    FIO name;
    old years;
    sex s;
    special sp;
    course co;
    group gr;
  
    average av;
};
bool operator!=(const student& one, const student& two)
{
    return one.av != two.av || one.co != two.co || one.gr != two.gr ||
        one.name != two.name || one.sp != two.sp || one.years != two.years || one.s != two.s;
}
bool operator>=(const student& one,const student& two)
{
    return one.av >= two.av;
}

bool operator==(const DATE& first, const DATE& second)
{
    return first.dd == second.dd && first.mm == second.mm && first.yyyy == second.yyyy;
}

bool operator<(const DATE& first, const DATE& second)
{
    if (first.yyyy < second.yyyy)
    {
        return true;
    }
    else if (first.yyyy > second.yyyy)
    {
        return false;
    }
    else
    {
        if (first.mm < second.mm)
        {
            return true;
        }
        else if (first.mm > second.mm)
        {
            return false;
        }
        else
        {
            if (first.dd < second.dd)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}


bool operator>(const DATE& first, const DATE& second)
{
    if (first.yyyy > second.yyyy)
    {
        return true;
    }
    else if (first.yyyy < second.yyyy)
    {
        return false;
    }
    else
    {
        if (first.mm > second.mm)
        {
            return true;
        }
        else if (first.mm < second.mm)
        {
            return false;
        }
        else
        {
            if (first.dd > second.dd)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}

int main()
{
	setlocale(LC_CTYPE, "rus");
	DATE date1 = { 7,1,1980 };
	DATE date2 = { 7,2,1993 };
	DATE date3 = { 7,1,1980 };

    student pivo = { "Pivo",17,'m',"proger", 28, 69, 1 };
    student pavel = { "Pavel",18,'w',"slave", 1,9, 0 };

	if (date1 < date2)
	{
		cout << "Истина" << endl;
	}
	else {
		cout << "Ложь" << endl;
	}
	if (date1 == date2)
	{
		cout << "Истина" << endl;
	}
	else {
		cout << "Ложь" << endl;
	}
	if (date1 == date3)
	{
		cout << "Истина" << endl;
	}
	else {
		cout << "Ложь" << endl;
	}
	if (date1 > date2)
	{
		cout << "Истина" << endl;
	}
	else {
		cout << "Ложь" << endl;
	}





    cout << "2" << endl;
 
    if (pivo != pavel)
    {
        cout << "Истина" << endl;
    }
    else {
        cout << "Ложь" << endl;
    }
    if (pivo >= pavel)
    {
        cout << "Истина" << endl;
    }
    else {
        cout << "Ложь" << endl;
    }


}