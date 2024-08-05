#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct node
{
	int number;
	node* next;
};

void push(node*&, int);
void counting(node*&,int);
void print(node*& p);
int pop(node*& p);
void clear(node*& p);
void input(node*& p);
void output(node*& p);
void dop(node*& p);


