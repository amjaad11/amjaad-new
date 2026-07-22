
#include <iostream>
#include <cctype>
using namespace std;
void RemovePunctuations(string text)
{
	for (int i = 0; i < text.length(); i++)
	{
		if (!ispunct(text[i]))
		{
			cout << text[i];
		}
	}
}
int main()
{
	string text = "Welcome to Ksa, Ksa is a nice country; it's amazing. \n\n";
	cout << "Original String: \n" << text;
	
	cout << "Pauncuations Removed:\n";
		RemovePunctuations(text);	  
}


