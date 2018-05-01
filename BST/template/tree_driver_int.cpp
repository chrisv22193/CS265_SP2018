#include <iostream>
#include "TNode.cpp"
#include "BinarySearchTree.cpp"
using namespace std;

int main()
{
	BinarySearchTree<int> *my_tree = new BinarySearchTree<int>();
	
	cout << "Enter a list of non-negative integers (negative integer stops input)." << endl;
	do
	{
		cout << "Enter a non-negative integer: ";
		int n;
		cin >> n;
		
		if (n<0) break;
		my_tree->add(n);
		cout << "Added " << n << " to the tree." << endl;
	} while(true);
	
	// output pre order traversal
	cout << endl << "Pre order traversal of your tree:" << endl;
	my_tree->preOrder();
	
	// output in order traversal
	cout << endl << "In order traversal of your tree:" << endl;
	my_tree->inOrder();
	
	// output post order traversal
	cout << endl << "Post order traversal of your tree:" << endl;
	my_tree->postOrder();
	
	// test contains function
	cout << endl << "Enter an integer value to find: ";
	int f;
	cin >> f;
	
	if ( my_tree->contains(f))
		cout << "Found " << f << " in the tree." << endl;
	else
		cout << "Did not find " << f << " in the tree." << endl;		

	cout << endl << "Removing " << f << " from the tree." << endl;

	my_tree->remove(f);
	
	// display in order traversal after removal of value
	my_tree->inOrder();
}
