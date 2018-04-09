#include <iostream>
using namespace std;

#include "SLinkedList.cpp"
#include "SNode.cpp"

int main()
{
	SNode<int> *int_node = new SNode<int>(10);
	int_node->displayNodeData();
	cout << endl;

	SLinkedList<int> *int_ll = new SLinkedList<int>();
    
    // test insertFront and insertBack
    int_ll->insertFront(100);
    int_ll->insertFront(120);
    int_ll->insertBack(140);
    cout << "Output should be: 120 -> 100 -> 140" <<endl;
    int_ll->displayList(); // should display 120 -> 100 -> 140
    
    // test insertAt
    int_ll->insertAt(1,125);
    int_ll->insertAt(3,135);
    cout << "Output should be: 120 -> 125 -> 100 -> 135 -> 140" <<endl;
    int_ll->displayList();
    
    // test deleteFront and deleteBack.
    // Note: deleteBack invokes deleteAt(itemCount-1)
    int_ll->deleteFront();
    int_ll->deleteBack();
    cout<< "Output should be: 125 -> 100 -> 135" << endl;
    int_ll->displayList();
    
    // test deleteAt
    int_ll->deleteAt(1);
    cout << "Output should be: 125 -> 135" << endl;
    int_ll->displayList();
    
}

