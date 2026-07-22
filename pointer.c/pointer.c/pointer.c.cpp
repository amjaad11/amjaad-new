// pointer.c.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	

	cout << "a value  " << a << endl;
	cout << "a ddress  " << &a << endl;

	int *p;
	p = &a;

	cout << "pointer Value " << p << endl;

	cout << "Value of address that p is pointing " << *p << endl;	

	*p = 20;
	cout << "New value of a " << a << endl;
	cout << "New value of pointer " << *p << endl;
   
	cout  << endl;
}
