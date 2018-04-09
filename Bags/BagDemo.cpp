#include <iostream>
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
	
	Bag<float> b = Bag<float>(50);
	cout << "Current size of bag b: " << b.getSize() << endl;
	cout << "Current capacity of bag b: " << b.getCapacity() << endl;
	
	int cap = b.getCapacity();
	cout << "Filling bag b of " << cap << " float values." << endl;
	
	// fill the bag of floats with some floating point values
    for(int i=0;i<cap;i++)
	{
		if ( i%3 == 0 ) b.add( i*2.375 );
		else if ( i%3 == 1 ) b.add ( -i*1.875 );
		else b.add( (i%cap) / 1.4142 ); 
	}
	
	b.output();
	
	cout << "Sorting the " << cap << " elements via bubblesort ..." << endl;
	b.sort();
	b.output();
}
