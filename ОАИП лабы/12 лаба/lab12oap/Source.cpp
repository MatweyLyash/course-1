//#include <iostream>
//#include <string>
//#include "BinaryTree.h"
//
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "rus");
//
//	int choice = 0, key;
//	Tree<string> tree;
//	string str;
//
//	do
//	{
//		cout << "�������� �������:" << endl;
//		cout << "1 - �������� ����" << endl;
//		cout << "2 - ������� ����" << endl;
//		cout << "3 - ����� ����" << endl;
//		cout << "4 - ������� ������" << endl;
//		cout << "5 - �������� ������" << endl;
//		cout << "6 - ������� ���������� ����" << endl;
//		cout << "7 - ��������� ����� ������" << endl;
//		cout << "8 - ���������� ����� ������" << endl;
//		cout << "9 - ������ � ����" << endl;
//		cout << "10 - ������ �� �����" << endl;
//		cout << "11 - �������� �� ������������������" << endl;
//		cout << "0 - �����" << endl;
//
//		cin >> choice;
//
//		switch (choice)
//		{
//		case 1:
//		{
//			int num = 0;
//			cout << "������� ��������� �� ������ ��������? "; cin >> num;
//			for (int i = 0; i < num; i++)
//			{
//				cin.ignore();
//				cout << "������� ������" << endl;
//				getline(cin, str);
//				cout << "������� ����: "; cin >> key;
//				tree.insert(str, key);
//			}
//			break;
//		}
//		case 2:
//		{
//			cout << "������� ����: "; cin >> key;
//			tree.remove(key);
//			break;
//		}
//		case 3:
//		{
//			cout << "������� ����: "; cin >> key;
//			tree.printNode(tree.search(key));
//			break;
//		}
//		case 4:
//		{
//			cout << "������:" << endl;
//			tree.print();
//			break;
//		}
//		case 5:
//		{
//			tree.clear();
//			break;
//		}
//		case 6:
//		{
//			char c;
//			cout << "������� ������: "; cin >> c;
//			cout << "���������� �������� " << c << " ����� " << tree.count_letters(c) << endl;
//			break;
//		}
//	
//		case 7:
//		{
//			cout << "������:" << endl;
//			tree.mixedTraversal();
//			cout << endl;
//			break;
//		}
//		case 8:
//		{
//			cout << "������:" << endl;
//			tree.in_orderTraversal();
//			cout << endl;
//			break;
//		}
//		case 9:
//		{
//			tree.writeToFile();
//			break;
//		}
//		case 10:
//		{
//			tree.readFromFile();
//			break;
//		}
//		case 11:
//		{
//			if (tree.isBalanced(tree.getRoot())) { cout << "������ ���������������" << endl; }
//			else { cout << "������ �� ���������������" << endl; }
//			break;
//		}
//		default:
//		{
//			break;
//		}
//		}
//	} while (choice != 0);
//}