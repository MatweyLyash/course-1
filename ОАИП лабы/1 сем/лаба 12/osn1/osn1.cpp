#include <iostream>
#include <stdio.h>
using namespace std;
int main() {

		char sentence[256] = {}; char newsentence[256] = {}; int counter = 0;
		cin.getline(sentence, 256);
		for (int i = 0; i < strlen(sentence); i++)
		{
			if (sentence[i] != '*') {
				newsentence[counter] = sentence[i];
				counter++;
				newsentence[counter] = sentence[i];
				counter++;
			}
		}
		cout << newsentence;
	
	
	return 0;
}

//#include<iostream>
//using namespace std;
//int main() {
//	int i;
//	char sentence[256] = {}; char newsentence[256] = {}; int counter = 0;
//	char *ps;
//	ps = sentence;
//	cin.getline(ps, 256);
//	
//	for (int i = 0; i < strlen(ps); ps++)
//	{
//		if (*ps != '*') {
//			newsentence[counter] = *ps;
//			counter++;
//			newsentence[counter] = *ps;
//			counter++;
//		}
//	}
//	cout << newsentence;
//}