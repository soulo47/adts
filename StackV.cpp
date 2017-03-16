#include "StackV.h"
#include <iostream>

int Stack::size()
{
	return data.size();
}

void Stack::push(int num)
{
	data.push_back(num);
}

void Stack::pop()
{
	data.pop_back();
}

int Stack::top()
{
	if (data.back()>-1)
	return data.back();
	
	else
	cout << "Stack is empty." << endl;
}

void Stack::clear()
{
	while (data.size()>-1)
	 data.pop_back();
}
