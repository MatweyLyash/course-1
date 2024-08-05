#include <iostream>
using namespace std;
double eps = 0.001;
float fun(float x)
{

	return pow(x, 2) + 3 * x - 5;//вершина: у=-2
}

float funRec(float a, float b, float eps)
{
	float c = (a + b) / 2;
	if ((b - a) <= 2*eps)
	{
		return c;
	}
	if (fun(a) * fun(c) <= 0)
	{
		funRec(a, c, eps);
	}
	else
	{
		funRec(c, b, eps);
	}

}

int recur(int m, int n)
{
	if  (m == 0)
	 {
	 return n + 1;
	 }
	 else if (n == 0)
	{
	recur(m - 1, 0);//если поставить 0 по приколу, будет работать с большим диапозоном чисел
	}

	 else
	{
		 recur(m - 1, recur(m, n - 1));
	}
	
	
}

void main()
{
	setlocale(LC_CTYPE, "rus");
	int m, n,a=0,b=0;
	cout << "Введите m и n" << endl;
	cin >> m >> n;
	cout<<recur(m, n);
	cout<<"\n";
	
	cout << "Введите а и б (сидели на трубе)" << endl;
	cin >> a>> b;
	cout<<funRec(a, b,eps);


}