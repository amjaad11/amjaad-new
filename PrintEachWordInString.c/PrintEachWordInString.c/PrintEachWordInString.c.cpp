
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void stringlength()
{

	int counter = 0;
	bool isword = false;


	string text;

	cout << "Please Enter a string? \n";
	getline(cin, text);


	for (int i = 0; i < text.length(); i++)
	{

		if (text[i] == ' ')
		{
			isword = false;
		}
		else if (isword == false)
		{
			isword = true;
			counter++;

		}
	}
	cout << " the number words " << counter << endl;
}


int main()
{
	stringlength();
}