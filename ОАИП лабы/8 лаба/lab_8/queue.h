#pragma once
#include <iostream>

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
	int size;
	int sizeNull;

public:
	queue();
	~queue();
	void insert(const T&);
	void print();
	int getSize();
	T& pop();
	void print_null();
	void getMax();
	void sizeToNull();
};

