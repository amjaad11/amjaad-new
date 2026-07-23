#pragma once
#include <iostream>

using namespace std;
namespace MyNamespace
{
	int ReadNumber()
		{
		int number;
		cout << "Please enter a number: \n";	
		cin >> number;
		return number;
	}		
}