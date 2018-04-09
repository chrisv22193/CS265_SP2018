#include <iostream>
#include "DLinkedList.cpp"
using namespace std;

int main()
{
	DLinkedList<int> *int_dlist = new DLinkedList<int>();
	
	int_dlist->displayList();
	
	// size should be 0
	cout << "Current size of int_dlist is: " << int_dlist->size() << endl;
	
	// add nodes to front of the double linked list
	int_dlist->insertFront(10);
	int_dlist->insertFront(15);
	int_dlist->insertFront(8);
	
	// output list after three insertFront calls
	int_dlist->displayList();
	
	// size should be 3
	cout << "Current size of int_dlist is: " << int_dlist->size() << endl;
	
	// add nodes to front of the double linked list
	int_dlist->insertBack(110);
	int_dlist->insertBack(115);
	int_dlist->insertBack(18);
	
	// output list after three insertBack calls
	int_dlist->displayList();
	
	// size should be 6
	cout << "Current size of int_dlist is: " << int_dlist->size() << endl;
	
	// add nodes to front of the double linked list
	int_dlist->insertFront(210);
	int_dlist->insertFront(215);
	int_dlist->insertFront(28);
	
	// output list after three insertFront calls
	int_dlist->displayList();
	
	// size should be 9
	cout << "Current size of int_dlist is: " << int_dlist->size() << endl;
	
	// add nodes to front of the double linked list
	int_dlist->insertBack(310);
	int_dlist->insertBack(315);
	int_dlist->insertBack(318);
	
	// output list after three insertBack calls
	int_dlist->displayList();
	
	// size should be 12
	cout << "Current size of int_dlist is: " << int_dlist->size() << endl;
	
	// test deleteFront
	int_dlist->deleteFront();
	
	// output list after one deleteFront call
	int_dlist->displayList();
	
	// size should be 11
	cout << "Current size of int_dlist is: " << int_dlist->size() << endl;
	
	// test deleteBack
	int_dlist->deleteBack();
	
	// output list after one deleteBack call
	int_dlist->displayList();
	
	// size should be 10
	cout << "Current size of int_dlist is: " << int_dlist->size() << endl;
	
	return 0;
}
