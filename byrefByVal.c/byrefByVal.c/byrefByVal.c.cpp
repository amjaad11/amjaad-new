// byrefByVal.c.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
 

	void changevalue(int x)
	{
		x++;

	}
	int main()
	{
		int a = 10;
		changevalue(a);
		cout << a << endl;

	}