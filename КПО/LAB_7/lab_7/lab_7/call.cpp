#include "call.h"
namespace call
{
	int _cdecl funA(int a, int b, int c)
	{
		return a + b + c;
	}

	int _stdcall funB(int& d, int e, int f)
	{
		return d * e * f;
	}

	int _fastcall funC(int g, int h, int i, int j)
	{
		return g + h + i + j;
	}
}

