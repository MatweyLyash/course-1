#include <iostream>

using namespace std;



int main()
{
	setlocale(0, "");
	int const sz = 7;
	int i, A[sz], B[sz], omax1 = A[0], omax2 = B[0];

	srand((unsigned)time(NULL));
	for (i = 0; i < sz; i++)
	{
		A[i] = rand() % 200;
		cout << A[i] << " ";
		if (A[i] > omax1)
			omax1 = A[i];

	}
	cout << "\n " << "omax1=" << omax1 << endl;
	cout << endl;
	for (i = 0; i < sz; i++)
	{
		B[i] = rand() % 200;
		cout << B[i] << " ";
		if (B[i] > omax2)
			omax2 = B[i];


	}
	cout << "\n " << "omax2=" << omax2 << endl;
	cout << endl;
	if (omax1 > omax2)
		cout << "максимальные осадки произошли в первую неделю " << endl;
	else
		cout << "максимальные осадки произошли во вторую неделю " << endl;

















}
	





