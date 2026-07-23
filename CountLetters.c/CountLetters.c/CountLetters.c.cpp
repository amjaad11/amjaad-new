
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void stringlength()
{
	string text;
	char letter;
	
	int count = 0;
	int less = 0;
	cout << "Please Enter string\n";
	getline(cin, text);


	cout << "Please Enter character? \n";
	cin >> letter;
	
	for (int i = 0; i < text.length(); i++)
	{


		  if (text[i] == tolower(letter))
		{
			less++;
		}

		  if (text[i])
		  {

			  count++;
		  }
	}
	
	
	
	cout << "letter '' Count " << less << endl;
	letter = tolower(letter);
	letter = toupper(letter);
	cout << "All letter" << count  << endl;
}
int main()
{
	
	stringlength();
}





