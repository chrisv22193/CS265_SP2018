#include <iostream>
#include <string>
#include "queue.cpp"
using namespace std;

int main()
{
	Queue<int> qi;
	
	cout << "size of qi (should be 0): " << qi.size() << endl;
	
	qi.enqueue(10);
	cout << "enqueuing 10... " << endl;
	cout << "size of qi (should be 1): " << qi.size() << endl;
	cout << "Contents of the queue: ";
	qi.display();

	qi.enqueue(16);
	cout << "enqueuing 16... " << endl;
	cout << "size of qi (should be 2): " << qi.size() << endl;
	cout << "Contents of the queue: ";
	qi.display();
	
	qi.enqueue(8);
	cout << "enqueuing 8... " << endl;
	cout << "size of qi (should be 3): " << qi.size() << endl;
	cout << "Contents of the queue: ";
	qi.display();
		
	int value;
	value = qi.dequeue();
	cout << "dequeuing front value... which was: " << value << endl;
	cout << "size of qi (should be 2): " << qi.size() << endl;
	cout << "Contents of the queue: ";
	qi.display();

	value = qi.dequeue();
	cout << "dequeuing front value... which was: " << value << endl;
	cout << "size of qi (should be 1): " << qi.size() << endl;
	cout << "Contents of the queue: ";
	qi.display();
	
	value = qi.dequeue();
	cout << "dequeuing front value... which was: " << value << endl;
	cout << "size of qi (should be 0): " << qi.size() << endl;
	cout << "Contents of the queue: ";
	qi.display();

	// test with strings
	Queue<string> qs;
	
	cout << "size of qs (should be 0): " << qs.size() << endl;
	
	qs.enqueue("hello");
	cout << "enqueuing 'hello''... " << endl;
	cout << "size of qs (should be 1): " << qs.size() << endl;
	cout << "Contents of the queue: ";
	qs.display();

	qs.enqueue("world");
	cout << "enqueuing 'world''... " << endl;
	cout << "size of qs (should be 2): " << qs.size() << endl;
	cout << "Contents of the queue: ";
	qs.display();
	
	qs.enqueue("how are you?");
	cout << "enqueuing 'how are you?''... " << endl;
	cout << "size of qs (should be 3): " << qs.size() << endl;
	cout << "Contents of the queue: ";
	qs.display();
		
	string s_value;
	s_value = qs.dequeue();
	cout << "dequeuing front value... which was: " << s_value << endl;
	cout << "size of qs (should be 2): " << qs.size() << endl;
	cout << "Contents of the queue: ";
	qs.display();

	s_value = qs.dequeue();
	cout << "dequeuing front value... which was: " << s_value << endl;
	cout << "size of qs (should be 1): " << qs.size() << endl;
	cout << "Contents of the queue: ";
	qs.display();
	
	s_value = qs.dequeue();
	cout << "dequeuing front value... which was: " << s_value << endl;
	cout << "size of qs (should be 0): " << qs.size() << endl;
	cout << "Contents of the queue: ";
	qs.display();
			
	return 0;
}
