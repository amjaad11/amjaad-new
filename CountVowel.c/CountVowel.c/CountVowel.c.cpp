#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void stringlength()
{

	char lattar[] = {'a','e','i','u','o'};
	int  mylattar = 0;
	string text;
	cout << "Please Enter a string? \n";
	getline(cin, text);


	for (int i = 0; i < text.length(); i++)
	{
		char c = tolower(text[i]);
		
			for (int i = 0; i < 5; i++)
			{ 
				if (c == lattar[i])
				{
					mylattar++;
				}
		}
	}
	cout << "number of vowels is " << mylattar << endl;
}
int main()
{
	stringlength();
}

