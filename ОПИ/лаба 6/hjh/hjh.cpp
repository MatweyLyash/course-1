#include <iostream>
#include <string>
#include<stdio.h>
#include "case.h"
#include <windows.h>

using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    int a; char c = 'a', f; string end; unsigned int k;
    printf("1 – определение разницы значений кодов в ASCII буквы в прописном и строчном написании,\n если введен символ латинского алфавита\0");
    printf("\n2 – определение разницы значений кодов в Windows - 1251 буквы в прописном и строчном написании,\n если введен символ русского алфавита;");
    printf("\n3 – вывод в консоль кода символа, соответствующего введенной цифре;");
    printf("\n4 – выход из программы.");
    printf("\n----------------------------------------------------------------------------------------------");
    printf("\nВведите вариант = ");
    cin >> a;
    switch (a) {
    case 1: 
    
        case1();
        break;
    case 2: 
        case2();
       
        break;
        
        
    case 3: 
        case3();
        break;
        
        
     
    case 4:
        return(0);
    }
          }
    


