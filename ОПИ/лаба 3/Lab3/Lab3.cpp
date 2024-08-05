#include <iostream>

//LyashonokMatvei2005
//  Windows-1251->4c796173686f6e6f6b4d617476656932303035
// UTF-8->\x4c\x79\x61\x73\x68\x6f\x6e\x6f\x6b\x4d\x61\x74\x76\x65\x69\x32\x30\x30\x35
//UTF-16->004c0079006100730068006f006e006f006b004d006100740076006500690032003000300035

//Ћ€шонокћатвейћихайлович2005 
//Windows-1251->cbfff8eeedeeeacce0f2e2e5e9cce8f5e0e9ebeee2e8f73230303520
// UTF-8->\xd0\x9b\xd1\x8f\xd1\x88\xd0\xbe\xd0\xbd\xd0\xbe\xd0\xba\xd0\x9c\xd0\xb0\xd1\x82\xd0\xb2\xd0\xb5\xd0\xb9\xd0\x9c\xd0\xb8\xd1\x85\xd0\xb0\xd0\xb9\xd0\xbb\xd0\xbe\xd0\xb2\xd0\xb8\xd1\x87\x32\x30\x30\x35\x20
// UTF-16->041b044f0448043e043d043e043a041c04300442043204350439041c0438044504300439043b043e04320438044700320030003000350020



//Ћ€шонок2005Matvei  
//Windows-1251->cbfff8eeedeeea323030354d617476656920
// UTF-8->\xd0\x9b\xd1\x8f\xd1\x88\xd0\xbe\xd0\xbd\xd0\xbe\xd0\xba\x32\x30\x30\x35\x4d\x61\x74\x76\x65\x69\x20\x20
// UTF-16->041b044f0448043e043d043e043a0032003000300035004d0061007400760065006900200020

int main()
{
	int number = 0x12345678;
	char hello [] = "Hello, ";
	char lfie[] = "LyashonokMatvei2005";
	char rfie[] = "л€шонокћатвейћихайлович2005";
	char lr[] = "ЋяЎќЌќ 2005Matvei  ";
	wchar_t Lfie[] = L"LyashonokMatvei2005";
	wchar_t Rfie[] = L"Ћ€шонокћатвейћихайлович2005 ";
	wchar_t LR[] = L"Ћ€шонок2005Matvei ";
	std::cout << hello << lfie << std::endl;
	return 0;
}