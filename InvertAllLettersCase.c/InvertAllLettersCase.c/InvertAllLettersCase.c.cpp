
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
void InvertAllLettersCase()
{
	string text;

	cout << "Please Enter string\n\n";
	getline(cin, text);


	for (int i = 0; i < text.length(); i++)
	{

		text[i] = isupper((char)text[i]) ? tolower(text[i]) : toupper(text[i]);
	
		cout << text[i];

	}
}

int main()
{
	InvertAllLettersCase();
	return 0;
}	












