#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main()
{

    	/*setlocale(LC_CTYPE, "rus");
    	int const size = 1000;
    	int N, r, r1, i, xArray[size], yArray[size];
    	cout << "Введите размер первого массива" << endl;
    	cin >> r;
    	cout << "Введите числа для первого массива" << endl;
    	for (i = 0; i < r; i++) {
    		cin >> xArray[i];
    
    	}
    	for (i = 0; i < r; i++) {
    
    		if (i == 0) {
    			cout << "Первый массив = " << xArray[i] << " ";
    		}
    		else {
    			cout << xArray[i] << " ";
    		}
    	}
    	cout << "\nВведите размер второго массива" << endl;
    	cin >> r1;
    	cout << "\nВведите числа для второго массива" << endl;
    	for (i = 0; i < r1; i++) {
    		cin >> yArray[i];
    
    	}
    	cout << "Второй массив = ";
    	for (i = 0; i < r1; i++)
    	{
    
    		cout << yArray[i] << " ";
    	}
    		
    		const int* pos = xArray;
    		const int* const end = xArray + r;
    		for (const int* i = yArray; i < yArray + r1; i++, pos++)
    		{
    			while (pos < end && *pos != *i)
    				++pos;
    			if (*pos == *end)
    			{
    				cout << "\nВторой массив не является подпоследовательностью первого массива" << endl;
    				return 0;
    			}
    		}
    		cout << "\nВсё хорошо:)" << endl;
    		return 0;*/
    srand(time(NULL));

    const int n = 10;

    int A[n], i, k;

    cout << "A: ";
    for (i = 0; i < n; i++) {
        A[i] = rand() % 100;
        cout << A[i] << "   ";


    }
    cout << endl;
    cout << "enter k= ";
    cin >> k;
    cout << endl;
    for (i = 0; i < n; i++)
    {
        if (A[i] == k)
            cout << i << " = \"k\",\t";
    }
    cout << endl;
    cout << endl;
    for (i = 0; i < n; i++)
    {
        if (A[i] > k)
            cout << i << " > \"k\",\t";
    }
    cout << endl;
    cout << endl;
    for (i = 0; i < n; i++)
    {
        if (A[i] < k)
            cout << i << " < \"k\",\t";
    }
}






   