// DynamicArraysNewAndDelete.c.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter total of students: ";
	cin >> num;

	float* ptr;

	ptr = new float[num];	
	cout << "Enter grades of students" << endl;

	for (int i = 0; i < num; ++i)
	{
		cout << "Student" << i + 1 << ": ";
		cin >> *(ptr + i);
	} 
	cout << "\n Displaying grades of students." << endl;
	for (int i = 0; i < num; ++i)
	{
		cout << "Student" << i + 1 << ": " << *(ptr + i) << endl;
	}
	delete[] ptr;
}


