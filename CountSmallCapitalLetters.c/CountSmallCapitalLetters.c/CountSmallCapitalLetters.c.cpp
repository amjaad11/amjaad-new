
#include <iostream>
#include <string>
using namespace std;

void stringlength()
{
	cout << "Please Enter string\n";
}
void printFirstLetter(string text)
{
	int countSmall = 0, countCapital = 0;			

	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] >= 'a' && text[i] <= 'z')
		{
			countSmall++;	
		}
			if (text[i] >= 'A' && text[i] <= 'Z')
			{
				countCapital++;	
			}			
	}
	cout << "Number of small letters is: " << countSmall << endl;
	cout << "Number of capital letters is: " << countCapital << endl;
}
void countstringlenth(string text)
{
	
	
	
;
	int length = 0;

	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] != ' ' &&  (i == 0 || text[i - 1] == ' '))
		{
			length++;
		}

		// Adding 1 to account for the last word after the last space
	}

	cout << "Number of words is: " << length << endl;
}
int main()
{
	string test;
	stringlength();
	getline(cin, test);
	printFirstLetter(test);	
	countstringlenth(test);
}
