#include "List.h"
using namespace std;

struct STOCK
{
	string name;
	string cost;
	string number;
	string allowance;


	STOCK* next;
};

void print(void* b)       //Функция используется при выводе 
{
	STOCK* a = (STOCK*)b;
	cout << a->name << " " << a->cost << " " << a->number << " " << a->allowance << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	STOCK a1 = { "Влад Вайбер", "228", "69", "%10"};
	STOCK a2 = { "Влад Афганистан", "1337", "7", "%5" };
	STOCK a3 = { "Влад Узбекистан", "420", "4", "%99" };
	Object L1 = Create();
	L1.Insert(&a3);
	L1.Insert(&a2);
	L1.Insert(&a1);
	bool rc;
	int c, n;
	do {
		cout << "Выберите, что сделать:" << endl;
		cout << "1 - вывести список и кол-во элементов;" << endl;
		cout << "2 - найти элемент;" << endl;
		cout << "3 - удалить элемент;" << endl;
		cout << "4 - удаление списка;" << endl;
		cout << "5 - выход." << endl;
		cin >> c;
		switch (c)
		{
		case 1:
			L1.PrintList(print);
			break;
		case 2: {
			cout << "Сделайте выбор:" << endl;
			cout << "1 элемент:" << endl;
			cout << "2 элемент:" << endl;
			cout << "3 элемент:" << endl;
			cin >> n;
			switch (n) {
			case 1: {
				Element* e = L1.Search(&a1);
				STOCK* aa = (STOCK*)e->Data;
				cout << "первый товар: " << aa->number << endl; }
				  break;
			case 2: {
				Element* e = L1.Search(&a2);
				STOCK* aa = (STOCK*)e->Data;
				cout << "второй товар: " << aa->number << endl; }
				  break;
			case 3: {
				Element* e = L1.Search(&a3);
				STOCK* aa = (STOCK*)e->Data;
				cout << "третий товар: " << aa->number << endl; }break;
			}break;
		}
		case 3: {

			cout << "Сделайте выбор:" << endl;
			cout << "1 элемент:" << endl;
			cout << "2 элемент:" << endl;
			cout << "3 элемент:" << endl;
			int o;
			cin >> o;
			switch (o) {
			case 1: rc = L1.Delete(&a1);
				if (rc == true) cout << "Удален элемент №1." << endl;
				break;
			case 2:rc = L1.Delete(&a2);
				if (rc == true) cout << "Удален элемент №2." << endl;
				break;
			case 3: rc = L1.Delete(&a3);
				if (rc == true) cout << "Удален элемент №3." << endl;
				break;
			}break;
			cout << "Список:" << endl;
			L1.PrintList(print);
			return 0;
		}
		case 4:
			rc = L1.Delete(&a1);
			rc = L1.Delete(&a2);
			rc = L1.Delete(&a3);
			break;
		case 5: cout << "staff окончен"; exit(0);
		}
	} while (c != 5);
}