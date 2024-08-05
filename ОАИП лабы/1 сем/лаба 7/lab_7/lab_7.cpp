#include <iostream>

int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	double n = 5, x[5] = { 2.7,-5,4,3.5,-7 }, sum1 = 0, sum2 = 1;
	for (int i = 0; i <= n - 1; i++)
	{
		if (x[i] <= 0)
		{
			sum2 *= x[i];
		}
		else
		{
			sum1 += x[i];
		}


	}
	cout << "\nЗадание 6(мой)" << sum1 << endl;
	cout << sum2 << endl;

	//1
	double m = 5, d = 12.5 * pow(10, -4), a[] = { 0.8,4,-7,2,0.91 }, h, sum3 = 0;
	for (int y = 1; y <= m; y++)
	{
		sum3 += pow(a[y - 1], 2);
	}
	h = d + sum3;
	cout << "\nЗадание 1" <<"\n"<< h << endl;
	//3
	double o = 5, w[] = { -2,6,1.1,2.7,4 }, sum4 = 0, z = 0;
	for (int q = 1; q <= o; q++)
	{
		sum4 += pow(w[q - 1] - 2, 2);
	}
	z = 8 * x[3] + sum4;
	cout << "\nЗадание 3" <<"\n"<< z << endl;
	//2
	double c = -0.045, v = 4, b[] = { 0.9,0.5,-2,-0.1 }, sum5 = 1, g = 0;
	for (int r = 1; r <= v; r++)
	{
		sum5 *= pow(b[r - 1] + 1, 2);
	}
	g = c * sum5;
	cout << "\nЗадание 2 " <<"\n"<< g << endl;
	//5
	double a1 = 1.5, b1 = -4.15, v1[] = { 1,1.5,-4,-1.9,3 }, w1 = 0;
	for (int i = 0; i < 5; i++)
	{
		if (v1[i] > 0) {
			w1 = a1 + v1[i];
			cout <<"v>0 "<< w1 << endl;

		}
		else
		{
			w1 = b1 / v1[i];
			cout <<"v<=0 "<< w1 << endl;
		}
	

	}
	//7
	double n1 = 6, a2[] = { 0.5,2,2.5,1,0.8 },  sum6 = 0, c1 = 0, d1 = 0, b2[] = { 2.3,4,0.5,2,3,9 };
	for (int j = 1; j <= 6; j++)
	{
		c1 = sqrt(a2[j-1] + b2[j-1]);
		sum6 += c1 / j;
}
	d1 = sum6;
	cout << "\nЗадание 7" <<"\n"<< d << endl;

}

