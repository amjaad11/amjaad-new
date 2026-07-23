#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;
void printFirstLetter()
{
	string text;

	cout << "Please Enter string\n";
	getline(cin, text);

	bool first = true;
	for (int i = 0; i < text.length(); i++)
	{
		if (i == 0)
		{

			text[i] = isupper((char)text[i]) ? tolower(text[i]) : toupper(text[i]);
		}
		cout << text;
	}
}
int main()	
{


		printFirstLetter();

	}
