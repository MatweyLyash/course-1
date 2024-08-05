#include<iostream>
using namespace std;
int main()
{
    const int SIZE = 1000;
    char sentence[SIZE] = "", word[SIZE];
    int position;
    setlocale(LC_ALL, "rus");
    cout << "Введите предложение...";
    cin.getline(sentence, SIZE);
    cout << "Введите подстроку:"; cin.getline(word, SIZE);
    cout << "Введите позицию с которой осуществляется вставка:"; cin >> position;
    char* s = sentence + position;
    memmove(s + strlen(word), s, strlen(s) + 1);
    memmove(s, word, strlen(word));
    cout << "Модифицированное предложение :\n";
    cout << sentence;
}

//#include<iostream>
//using namespace std;
//int main()
//{
//    const int SIZE = 1000;
//    char sentence[SIZE] = "", word[SIZE];
//    int position;
//    char *psentence;
//    char *pword;
//    psentence = sentence;
//    pword = word;
//    setlocale(LC_ALL, "rus");
//    cout << "Введите предложение...";
//    cin.getline(psentence, SIZE);
//    cout << "Введите подстроку:"; cin.getline(pword, SIZE);
//    cout <<" Длина К подстроки s1 = "<< strlen(pword)<<endl;
//    cout << "Введите позицию с которой осуществляется вставка:"; cin >> position;
//    char* s = psentence + position;
//    memmove(s + strlen(pword), s, strlen(s) + 1);
//    memmove(s, pword, strlen(pword));
//    cout << "Модифицированное предложение :\n";
//    cout << psentence;
//}
