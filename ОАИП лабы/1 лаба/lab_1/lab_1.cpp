
#include <iostream>

#define ACCURACY 0.001          //Точность

using namespace std;
//мой вариант
double equationNum1(double x)      //Первое уравнение
{
    return 2 - pow(x, 2) + x;
}

double equationNum2(double x)      //Второе уравнение
{
    return pow(sin(x), 2) + 0.2;
}

//2 вариант
//double equationNum1(double x) {
//    return(pow(x, 3) + x - 3);
//}
//double equationNum2(double x) {
//    return(pow(cos(x), 3));
//}
//5 вариант
//double equationNum1(double x) {
//    return(exp(x) - 3 - 1 / x);
//}
//double equationNum2(double x) {
//    return(0.2 - pow(x, 2));
//}
//Вариант 1
//double equationNum1(double x)
//{
//    return pow(x, 2) + 4 * x - 2;
//}
//
//double equationNum2(double x)
//{
//    return sin(x) + 0.1;
//}






double dichotomy(double a, double b, double(*equation)(double x))
{
    double x = 0;

    while (b - a > ACCURACY)
    {
       
        x = (a + b) / 2;

        if (equation(a) * equation(x) < 0)//сюда передаётся уравнение, которое запрашивается в главной функции. Пример:  
        {//  double (*ptrEquationNum1)(double x) = equationNum1 = equation(x), которое объявляется в шапке функции dichotomy

            b = x;
        }
        else
        {

            a = x;
        }
    }
 
    return x;
}

int main()
{
    setlocale(LC_ALL, "rus");

    double (*ptrEquationNum1)(double x) = equationNum1;      //Указатель на функцию, содержащую первое уравнение
    double (*ptrEquationNum2)(double x) = equationNum2;    //Указатель на функцию, содержащую второе уравнение

    double a, b;

    cout << "Введите промежуток (a,b) для первого уравнения: " << endl;
    cin >> a >> b;

    cout << "Корень первого уравнения: " << dichotomy(a, b, ptrEquationNum1) << endl;

    cout << "Введите промежуток (a,b) для второго уравнения: " << endl;
    cin >> a >> b;
    if (dichotomy(a, b, ptrEquationNum2) > b - 0.01)
    {
        cout << "Корней на данном промежутке нет";
        return 0;
    }
    cout << "Корень второго уравнения: " << dichotomy(a, b, ptrEquationNum2) << endl;
}