#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

auto zad2 = []<typename T>(const T & el2)
{
    return (el2 >= 1 && el2 <= 127) ? true : false;
};
int main()
{
    setlocale(LC_ALL, "Rus");
    vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int target1 = 3;
    int num_items1 = count(v.begin(), v.end(), target1);
    cout << "Число: " << target1 << " количество: " << num_items1 << endl;
    int num_items3 = count_if(v.begin(), v.end(), [](int i) {return i % 3 == 0; });
    cout << "Количество элементов, кратных 3: " << num_items3 << endl << endl;

    cout << "Лямбда, захват переменных" << endl;

    for (auto i : v) [i]()
    {
        if (i % 3 == 0)
            cout << i << " ";
    }();

    cout << "\nЛямбда с параметрами" << endl;
    for (auto i : v) [](auto i)
    {
        if (i % 3 == 0)
            cout << i << " ";
    }(i);
    
    cout << "\nЛямбда без параметров" << endl;
    for (auto i : v) [i]()
    {
        if (i % 3 == 0)
            cout << i << " ";
    }();
    cout << endl;


    cout << "Дополнительно 1\n Введите число:" << endl;
    int el1 = 0;
    
    cin >> el1;
    auto root = [](auto el1) ->bool
    {
        if (el1 > 0) {
            return true;
        }
        else {
            return false;
        }
              
    };
    cout << root(el1)<<endl;
 
    cout << "Дополнительно 2 " << endl;
    cout << zad2(2) << endl;
    cout << zad2(-2.6) << endl;
    cout << zad2('i') << endl;
    cout << zad2('Ф') << endl;

    cout << "\nДополнительно 3: " << endl;
    auto result = [](string str1, string str2)
    {
        return str1 + str2;
    }("шиш", " камыш");
    cout << result << endl;

    return 0;
}

