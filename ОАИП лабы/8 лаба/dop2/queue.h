#pragma once
#include <iostream>
using namespace std;
template<class T>
class queue
{
private:
	class node
	{
	public:
		T data;
		node* next;
		node(T data = T(), node* next = nullptr)
		{
			this->data = data;
			this->next = next;
		}

	};
	node* head, * tail;
public:
	queue();
	void insert(const T& data);
	void getFromHead();
	void sortMax();
	void print();
};