template<class T> class Bag {
	private: 	
		const int MAX_SIZE = 100;
		T *bag_items;
		int bag_size;
	    int num_items;
	    
    public:
		Bag();
    	Bag(int startSize);
    
    	// return the current size of the bag, or the number of elements in the bag
    	int getSize();
    
    	// return the capacity (number of items our bag can hold)
    	int getCapacity();
    	
    	// returns true if bag is empty or false if bag is not empty
    	bool isEmpty();
    	
    	// returns true if bag is full or false if bag is not full
    	bool isFull();
    
    	// add item to bag, returns true if successful, false if not
    	bool add(T item);
    
    	// returns true if item is removed from bag
    	bool remove(T item);
    
	    // clear the bag of all items
	    void clear();
	    
	    // returns true if item found in bag
	    bool contains(T item);
	    
	    // sort bag
	    void sort();
	    
	    // output elements in the bag in a nice list
	    void output();
};

