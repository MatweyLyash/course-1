#pragma once
#include "queue.h"

template<class T>
queue<T>::queue()
{
	head = tail = nullptr;
	size = 0;
}

template<class T>
queue<T>::~queue()
{
	node* current = head;
	while (head != nullptr)
	{
		head = head->next;
		delete current;
		current = head;
	}
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
	size++;
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

template<class T>
void queue<T>::getMax()
{
	if (head == nullptr)
	{
		std::cout << "pusto" << std::endl;
	}
	else
	{
		node* current = head;
		int max = INT16_MIN;

		while (current != nullptr)
		{
			if (max < current->data)
			{
				max = current->data;
			}
			current = current->next;

		}
		std::cout << "Максимальный элемент очереди: " << max << std::endl;
	}
	std::cout << std::endl;
}


template<class T>
int queue<T>::getSize()
{
	return size;
}

template<class T>
T& queue<T>::pop()
{
	node* temp = head;
	T value = head->data;
	head = head->next;
	delete temp;
	return value;
}

template<class T>
void queue<T>::print_null()
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
			if (current->data == 0) { return; }
			current = current->next;
			sizeNull++;
		}
		std::cout << std::endl;
	}
}
template<class T>
void queue<T>::sizeToNull()
{
	if (head == nullptr)
	{
		std::cout << "pusto" << std::endl;
	}
	else
	{
		std::cout << "\nРазмер оставшейся очереди :" << size - sizeNull-1<<std::endl;
	}
}
