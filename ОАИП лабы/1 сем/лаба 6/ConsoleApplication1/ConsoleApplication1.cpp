
#include <iostream>

int main()
{
	using namespace std;
	int a, b;
	for (int g = 98; g >= 10; g--)
	{
		a = g / 10;
		b = g % 10;
		if (a != b) {
			cout << g << endl;
		}
	}
}
