//доп5
#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

int main(int argc, char* argv[])
{
    using namespace std;
    setlocale(LC_ALL, "rus");
    vector<string> arr;
    string str;
    string word;
    int i = 0;

    cout << "Введите предложение " << endl;
    getline(cin, str);

    stringstream  data(str);

    while (getline(data, word, ' '))
    {
        if (i++ % 2 != 0)
        {
            reverse(word.begin(), word.end());
            arr.push_back(word);
        }
    }

    for (vector<string>::iterator iter = arr.begin(); iter < arr.end(); ++iter)
        cout << *iter << " ";

    return 0;
}