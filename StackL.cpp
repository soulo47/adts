#include "StackL.h"
#include <iostream>

int Stack::size()
{
	return data.size();
}

void Stack::push(int num)
{
	data.insert(num,1);
}

void Stack::pop()
{
	data.remove(1);
}

int Stack::top()
{
	int top = data.getAt(1);
	return top;
}

void Stack::clear()
{
	data.clear();
}
	
