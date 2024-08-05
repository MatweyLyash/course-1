#pragma once
#include <iostream>
using namespace std;
namespace call
{
	int _cdecl funA(int a, int b, int c);//при передаче параметров, в функции создаютс€ локальный копии передаваемых параметров, с которымми осуществла€ютс€ операции
	int _stdcall funB(int&d, int e, int f);//при передачи по ссылке, в функцию передаЄтс€ адрес переменной -> не создаЄтс€ локальна€ копи€ 
	int _fastcall funC(int g, int h, int i, int j);

}
