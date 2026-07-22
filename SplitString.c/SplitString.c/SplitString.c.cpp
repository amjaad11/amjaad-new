
#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

void stringlength()
{

	string text;
	string word = "";
	vector<string> words;
	int count = 0;
	cout << "Please Enter a string? \n";
	getline(cin, text);
	

	for (int i = 0; i < text.length(); i++)
	{
		
		if (text[i] != ' ')
		{
			word += text[i];

		}
		else if (text[i] == ' ')
		{
			words.push_back(word);
			word = "";
		}
	}
	if (word != "")
	{
		count++;
		words.push_back(word);
		
	}
	cout << "Tokens = " << words.size() << endl;
	for (int i = 0; i < words.size(); i++)
	{
		cout << words[i]<< endl;
	}
	
}


int main()
{
	stringlength();
}