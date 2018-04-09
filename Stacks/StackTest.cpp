// Stack Tester
#include <iostream>
#include "Stack.cpp"
using namespace std;

int main()
{
    // test stack of integers
    Stack<int> *si = new Stack<int>();
    
    // Output the stack, should report being empty.
    si->display();
    
    // Testing Pushes
    // Push a value onto the stack
    si->push(100);
    
    // Output the stack, should show T: {100} on the stack
    si->display();
    
    // Push a value onto the stack
    si->push(110);
    
    // Output the stack, should show T: {110} {100} on the stack
    si->display();
    
    // Push a value onto the stack
    si->push(90);
    
    // Output the stack, should show T: {90} {110} {100} on the stack
    si->display();
    
    // Testing Peeks
    cout << "Top of the stack is: " << si->peek() << endl;
    
    // Output the stack, peek does not remove the top item from the stack.
    si->display();
    
    //Testing Pops
    // Pop value off top of the stack
    si->pop();
    
    // Output the stack, should show T: {110} {100} on the stack
    si->display();
    
    // Pop value off top of the stack
    si->pop();
    
    // Output the stack, should show T: {100} on the stack
    si->display();
    
    // Pop value off top of the stack
    si->pop();
    
    // Output the stack, should show stack is empty
    si->display();
    
    // Pop value off top of the empty stack
    si->pop();
    
    // Output the stack, should show stack is empty
    si->display();
    return 0;
}
