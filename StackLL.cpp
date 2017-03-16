#include "StackLL.h"
#include <iostream>
#include <stdexcept>//used to be able to "throw" exceptions

using namespace std;


class Stack::Node //self-referential Node class
{
	public:
	   int data = 0;
	   Node* link = nullptr;
	   //link is a data member which is a pointer 
	   //to an object of the same type (i.e. Node)
	
	};//end Node class definition (can only be seen by the List class)


Stack::~Stack()
{
    while(num_elements > 0)
      pop();
}
	
int Stack::size()
 {
    return num_elements;
 }

void Stack::push(int val)
{
	
	
	Node* newPtr = new Node{val};
	{
	  newPtr->link = frontPtr;
	  frontPtr = newPtr;
	 }
	 num_elements++;
}

void Stack::pop()
{
	
	
	Node* delPtr;
	int del_data;
	
	  delPtr = frontPtr;
	  frontPtr = frontPtr->link;
	  del_data=delPtr->data;
	  delete delPtr;
	  num_elements--;
	
}	    
	
void Stack::clear()
	{
		while(num_elements!=0)
		{
			pop();
		}
	}//clear
	
int Stack::top()
{
	Node*currPtr=frontPtr;
	return currPtr->data;
}

