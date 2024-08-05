#include "Header.h"

int main(void)
{
	Address* head = NULL;
	Address* last = NULL;
	setlocale(LC_CTYPE, "Rus");
	while (true)
	{
		switch (menu())
		{
		case 1:  insert(setElement(), &head, &last);
			break;
		case 2: {	  char dname[NAME_SIZE];
			cout << "Введите имя: ";
			cin.getline(dname, NAME_SIZE - 1, '\n');
			cin.ignore(cin.rdbuf()->in_avail());
			cin.sync();
			delet(dname, &head, &last);
			break;
		}
			  
		case 3:  outputList(&head, &last);
			break;
		case 4: {	  char fname[NAME_SIZE];
			cout << "Введите имя: ";
			cin.getline(fname, NAME_SIZE - 1, '\n');
			cin.ignore(cin.rdbuf()->in_avail());
			cin.sync();
			find(fname, &head);
			break;
		}
			 
		
		case 5: writeToFile(&head); break;
		case 6: readFromFile(&head, &last); break;
		case 7:
		{
			int choice = 0;
			cout << "По какому из полей вы хотите найти минимальный элемент списка?\n1 - по имени\n2 - по адресу" << endl;
			cin >> choice;
			switch (choice)
			{
			case 1: 
			{
				
				findMinName(&head);
			
			}
			break;
			case 2:
			{
				
				findMinCity(&head);
				
			}
			break;
			}
			
		}
		case 8:  exit(0);
		default: exit(1);
		}
	}
	return 0;
}
