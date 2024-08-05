#include "C:\Users\Матвей\Desktop\Лаборато рные работы\КПО\SE_lab6\Lib\Dictionary.h" 

using namespace std;
using namespace Dictionary;

int main() {
	setlocale(LC_ALL, "Rus");


	Instance d1 = Create("Преподаватели", 7);
	Entry e1 = { 1, "Гладкий" }, e2 = { 2, "Мисевич" }, e3 = { 3, "Павел Пиво" }, e4 = { 4, "Урбанович" }, e5 = { 5, "Пацей" }, e6 = { 6, "Жиляк" }, e7 = { 7, "Белодед" };
	AddEntry(d1, e1);
	AddEntry(d1, e2);
	AddEntry(d1, e3);
	AddEntry(d1, e4);
	AddEntry(d1, e5);
	AddEntry(d1, e6);
	AddEntry(d1, e7);

	Entry ex2 = GetEntry(d1, 4);

	DelEntry(d1, 2);

	Entry newentry1 = { 6, "Фишков" };// айДи 6

	UpdEntry(d1, 3, newentry1);//стаивм на третью позицию
	Print(d1);

	Instance d2 = Create("Студенты", 7);
	Entry s1 = { 1, "Пивов" }, s2 = { 2, "Петров" }, s4 = { 4, "Сидоров" }, s5 = { 5, "Смирнов" }, s6 = { 6, "Аксенчик" }, s7 = { 7, "Востряков" };
	AddEntry(d2, s1);
	AddEntry(d2, s2);
	AddEntry(d2, s4);
	AddEntry(d2, s5);
	AddEntry(d2, s6);
	AddEntry(d2, s7);
	Entry newentry3 = { 3, "Петькин" };
	UpdEntry(d2, 4, newentry3);
	Print(d2);
	Delete(d1);
	Delete(d2);

	system("pause");
	return 0;
}


