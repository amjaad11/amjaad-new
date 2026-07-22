// WriteDataToFile.c.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>	
#include <string>
#include <vector>

using namespace std;
void LoadDateFromFileToVector(string FileName, vector <string>& vfilecontent)
{
	fstream Myfile;
	Myfile.open("Myfile.txt", ios::in); // Open file in write mode
	if (Myfile.is_open()) {
		string line;
		while (getline(Myfile, line))
		{
			vfilecontent.push_back(line);
		}
		Myfile.close();
	}

}
void saveVectorTofile(string FileName, vector <string>& vfilecontent)
{
	fstream Myfile;
	Myfile.open("Myfile.txt", ios::out); // Open file in write mode
	if (Myfile.is_open()) {
		for (string& ling : vfilecontent)
		{
			Myfile << ling << endl;
		}
		Myfile.close();
	}
int main()
{
	vector <string> vfilecontent;
	printfile("MyFile.txt", vfilecontent);
	for (string& ling : vfilecontent)
	{
		cout << ling << endl;
	}
}

