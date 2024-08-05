#include "queue.h"
#pragma once
using namespace std;
template<class T>
queue<T>::queue()
{
	head = tail = nullptr;
	
}
template<class T>
void queue<T>::insert(const T& data)
{
	node* element = new node(data);

	if (head == nullptr)
	{
		head = tail = element;
	}
	else
	{
		tail->next = element;
		tail = element;
	}
	
}
template<class T>
void queue<T>::getFromHead()
{
	
		if (head==nullptr)
			std::cout << "Очередь пуста" << std::endl;
		else
			std::cout << "Начало = " << head->data << std::endl;
	
}
template<class T>
void queue<T>::sortMax()
{
	node* current = new node;
	current = head;
	int count = 1, i = 1;
	float max = head->data;
	while (current != nullptr)
	{
		if (max < current->data)
		{
			max = current->data;
			count = i;
		}
		i++;
		current = current->next;
	}
	tail->next = head;
	while ((count - 1))
	{
		head = head->next;
		tail = tail->next;
		count--;
	}
	tail->next = nullptr;

}

template<class T>
void queue<T>::print()
{
	if (head == nullptr)
	{
		std::cout << "pusto" << std::endl;
	}
	else
	{
		node* current = head;
		while (current != nullptr)
		{
			std::cout << current->data << " ";
			current = current->next;

		}
		std::cout << std::endl;
	}
}