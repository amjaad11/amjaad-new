


#include <iostream>
#include <string>
#include <cctype>
using namespace std;
void upperAllstring()
{
	string text;

	cout << "Please Enter string\n\n";
	getline(cin, text);


	for (int i = 0; i < text.length(); i++)
	{
		
			cout << (char)toupper(text[i]);
			
	}
}
void LowerAllstring()
{
	string text;

	cout << "\nPlease Enter string\n\n";
	getline(cin, text);


	for (int i = 0; i < text.length(); i++)
	{

		cout << (char)tolower(text[i]);

	}
}
int main()
{


	upperAllstring();
	LowerAllstring();

}