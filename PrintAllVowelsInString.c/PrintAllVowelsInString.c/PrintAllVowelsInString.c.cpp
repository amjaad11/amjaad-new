
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void stringlength()
{

	char lattar[] = { 'a','e','i','u','o' };
	
	string text;
	cout << "Please Enter a string? \n";
	getline(cin, text);


	for (int i = 0; i < text.length(); i++)
	{
		char orginal = text[i];
		char c = tolower(orginal);

		for (int j = 0; j < 5; j++)
		{
			if (c == lattar[j])
			{
				cout << orginal;
				break;
			}
		}
	}
	cout  << endl;
}
int main()
{
	stringlength();
}