//#include <iostream>
//#include <windows.h>
//#include <string>
//#include <stdio.h>
//using namespace std;
//void main() {
//	setlocale(LC_ALL, "ru");
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	char string[256] = "";
//	cout << "Введите строку "<<endl;
//	cin.getline(string, 256);
//	int letter = 0, kol = 0, max = 0, q, w;
//	for (int i = 0; i < strlen(string); i += letter + 1, letter = 0) {
//		for (int j = i; ; j++) {
//			letter++;
//			if (string[j + 1] == ' ' || string[j + 1] == '\0') {
//				break;
//			}
//		}
//		for (int j = i; j < i + letter - 1; j++) {
//			if (string[j] == 'a' || string[j] == 'e' || string[j] == 'i' || string[j] == 'o' || string[j] == 'u')
//			{
//				kol++;
//				if (kol > max)
//				{
//					max = kol;
//					q = i;
//					w = letter;
//
//				}
//
//			}
//
//		}
//		kol = 0;
//	}
//	string[q + w] = '\0';
//	for (int s = q; s < q + w; s++)
//	{
//		cout << string[s];
//	}
//	cout << endl;
//}




#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

typedef std::string         T_str;
typedef std::vector<T_str>  T_strings;

void  print_unique_words(const T_str& s)
{
    std::istringstream  ssin(s);
    std::istream_iterator<std::string>  ssin_beg(ssin), ssin_end;
    T_strings  words;
    std::copy(ssin_beg, ssin_end, std::back_inserter(words));

    for (T_strings::iterator word_it = words.begin(); word_it != words.end(); )
    {
        T_strings::iterator  find_word_it
            = std::find(word_it + 1, words.end(), *word_it);
        if (find_word_it != words.end())
        {
            words.erase(find_word_it);
        }
        else
        {
            ++word_it;
        }
    }

    std::copy(words.begin(), words.end(),
        std::ostream_iterator<std::string>(std::cout, " "));
}
/////////////////////////////////////////////////////////////////////////////////////
int main()
{
    std::locale::global(std::locale(""));
    std::cout << "Введите предложение с повторяющимися словами: "
        << std::endl;
    T_str  s;
    std::getline(std::cin, s);
    std::cout << "Предложение с удаленными дублями слов:"
        << std::endl;
    print_unique_words(s);
    std::cout << std::endl;
}
