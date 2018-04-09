#include <iostream>
#include <string>
#include "deque.cpp"
using namespace std;

int main()
{
	Deque<int> di;
	
	cout << "size of di: " << di.size() << endl;
	di.display();
	di.enqueue_back(100);
	di.push_back(1000);
	cout << "size of di: " << di.size() << endl;
	di.display();
			
	di.enqueue_front(200);
	di.push_front(2000);
	cout << "size of di: " << di.size() << endl;
	di.display();
	
	int value = di.pop_front();
	cout << value << endl; // 2000
	cout << "size of di: " << di.size() << endl;
	di.display();
	value = di.dequeue_front();
	cout << value << endl; // 200
	cout << "size of di: " << di.size() << endl;
	di.display();
	value = di.pop_back();
	cout << value << endl; // 1000
	cout << "size of di: " << di.size() << endl;
	di.display();
	value = di.dequeue_back();
	cout << value << endl; // 100
	cout << "size of di: " << di.size() << endl;
	di.display();
	
	value = di.dequeue_front();
	di.push_back(500);
	cout << "size of di: " << di.size() << endl;
	di.display();
	
	value = di.dequeue_back();
	di.push_front(50);
	cout << "size of di: " << di.size() << endl;
	di.display();
	
	return 0;
}
