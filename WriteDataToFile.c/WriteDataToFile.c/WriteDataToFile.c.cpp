// WriteDataToFile.c.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>	
using namespace std;
int main()
{
	fstream Myfile;
	Myfile.open("Myfile.txt",ios::app ); // Open file in write mode
	if (Myfile.is_open()) {


		Myfile << "Hi,Amiaad!\n"; // Write data to file
		Myfile << "Welcome to C++ programming.\n";
		
		Myfile.close(); // Close the file
	}
}
 
