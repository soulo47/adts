#include <iostream>
#include "List.h"

using namespace std;

int main()
{
 int l1Num;
 int l2Num;
 int choice;
 int t=0;
 int posInsert1;
 int posRemove1;
 int posInsert2;
 int posRemove2;

 List L1, L2;

 cout << "1. Insert an element in list 1.." << endl;
 cout << "2. Remove an element in list 1." << endl;
 cout << "3. Display list 1." << endl;
 cout << "4. Display the size of list 1." << endl;
 cout << "5. Insert an element in list 2." << endl;
 cout << "6. Remove an element in list 2." << endl;
 cout << "7. Display list 2." << endl;
 cout << "8. Display the size of list 2." << endl;
 cout << "9. Exit." << endl;
 
 while (t != 1)
 {
	 cout << "Enter your numerical choice." << endl;
	 cin >> choice;
	 
	 switch(choice)
	 {
		 case 1:
		  cout << "Enter the element you want to insert and the position you want to insert it." << endl;
		  cin >> l1Num;
		  cin >> posInsert1;
		  L1.insert(l1Num,posInsert1);
		  break;
		  
		 case 2: 
		  cout << "Enter the position of the element you want to remove." << endl;
		  cin >> posRemove1;
		  L1.remove(posRemove1);
		  break;
		  
		 case 3:
		  cout << "List 1 contains: " << endl;
		  L1.display();
		  
		 case 4:
		   cout << "The size of list 1 is: " << endl;
		   cout << L1.size() << endl;
		   break;
		   
		 case 5:
		  cout << "Enter the element you want to insert and the position you want to insert it." << endl;
		  cin >> l2Num;
		  cin >> posInsert2;
		  L2.insert(l1Num,posInsert2);
		  break;
		  
		 case 6: 
		  cout << "Enter the position of the element you want to remove." << endl;
		  cin >> posRemove2;
		  L2.remove(posRemove2);
		  break;
		  
		 case 7:
		  cout << "List 1 contains: " << endl;
		  L2.display();
		  
		 case 8:
		   cout << "The size of list 1 is: " << endl;
		   cout << L2.size() << endl;
		   break;
		   
		 case 9:
		   t=1;
		   break;
		   
		 default:
		   cout << "Wrong choice. Try Again!";
	}//switch
 }//while
		  
}//main
