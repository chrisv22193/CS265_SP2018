#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "Bag.cpp"

int main()
{
	Bag<int> a;
	cout << "Current size of bag a: " << a.getSize() << endl;
	
	a.add(100);
	a.add(120);
	a.add(99);
	cout << "Current size of bag a: " << a.getSize() << endl;
	
	cout << "Contents of bag a:" << endl;
	a.output();
	
	cout << "Sorting the bag a:" << endl;
	a.sort();
	cout << "Contents of bag a (sorted):" << endl;
	a.output();
	
	Bag<float> b = Bag<float>(500000000);
	cout << "Current size of bag b: " << b.getSize() << endl;
	cout << "Current capacity of bag b: " << b.getCapacity() << endl;
	
	int cap = b.getCapacity();
	cout << "Filling bag b of " << cap << " float values." << endl;
	
	srand(time(0));
	// fill the bag of floats with some floating point values
    for(int i=0;i<cap;i++)
	{
		b.add( (float)rand()/(float)rand() ); 
	}
	
	//b.output();
	
	cout << "Sorting the " << cap << " elements via heapsort ..." << endl;
	b.sort();
	//b.output();
}

