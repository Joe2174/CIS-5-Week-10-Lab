#include <iostream>

using std::cout;
using std::endl;

// Lab 10 — Joe Barron
// CIS 5 Week 10 · References & pointers


void swap_values(int& a, int& b) // pass by reference
{
	int temp = a; // store the value of a in a temporary variable
	a = b; // assign the value of b to a
	b = temp; // assign the value of temp (original a) to b
}

int main() 
{
  int x = 3, y = 7;
  cout << "Before: X = " << x << " Y = " << y << "\n";

  swap_values(x, y); // call the function to swap the values of x and y
  cout << "After: X = " << x << " Y = " << y << "\n";

  int* p = &x; // pointer to x
  cout << "Pointer p points to x: " << *p << "\n"; // dereference pointer to get value of x
  
  return 0;
}
