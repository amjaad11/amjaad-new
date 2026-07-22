

#include <iostream>
#include <string>
using namespace std;
void printFirstLetter()
{
	string text;
	cout << "Please Enter string\n";
	getline(cin, text);


	for (int i = 0; i < text.length(); i++)
	{
		if (i == 0 || text[i - 1] == ' ')
		{
			cout << " " << text[i] << " ";
		}
	}
}
int main()
{
	printFirstLetter();
}

