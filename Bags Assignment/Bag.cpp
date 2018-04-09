#ifndef BAG_H
#define BAG_H

#include "bag.h"

template <class T> Bag<T>::Bag() {
	bag_items = new T[MAX_SIZE];
	bag_size=MAX_SIZE;
    num_items=0;
}

template <class T> Bag<T>::Bag(int startSize)
{
    bag_items = new T[startSize];
    bag_size=startSize;
    num_items=0;
}

// return the current size of the bag, or the number of elements in the bag
template <class T> int Bag<T>::getSize(){
    return num_items;
}

// return the capacity (number of items bag can hold)
template <class T> int Bag<T>::getCapacity() {
	return bag_size;
}

// returns true if bag is empty or false if bag is not empty
template <class T> bool Bag<T>::isEmpty() {
    return num_items == 0;
}

// returns true if bag is full or false if bag is not full
template <class T> bool Bag<T>::isFull() {
    return num_items == bag_size;
}

// add item to bag, returns true if successful, false if not
template <class T> bool Bag<T>::add(T item) {
    if ( this->isFull() ) return false;
    bag_items[num_items++] = item;
    //this->sort();
    return true;
}

// returns true if item is removed from bag
template <class T> bool Bag<T>::remove(T item) {
	if ( this->isEmpty() ) return false;
	bool result = false;
    for(int i=0;i<num_items;i++)
    {
        if ( bag_items[i]==item )
        {
            for(int j=i+1;j<num_items;j++)
                bag_items[j-1]=bag_items[j];
            num_items--;
            result = true;
        }
    }
    return result;
}

// clear the bag of all items
template <class T> void Bag<T>::clear()
{
    num_items=0; // just reset num_items to zero and overwrite old data when we add new data
}

// returns true if item found in bag
template <class T> bool Bag<T>::contains(T item) {
    for(int i=0;i<num_items;i++) if ( bag_items[i]==item ) return true;
    return false;
}    


template <class T> void Bag<T>::sort()
{
	// Implement your QuickSort, or MergeSort here (HeapSort if you are adventurous!)
}

template <class T> void Bag<T>::output() {
	if ( this->isEmpty() ) {
		cout << "Bag is empty" << endl;
	}
	else
		{
			for(int i=0;i<num_items-1;i++)
			{
				cout << bag_items[i] << ", ";
			}
			cout << bag_items[num_items-1] << endl;
		}
}        

#endif
