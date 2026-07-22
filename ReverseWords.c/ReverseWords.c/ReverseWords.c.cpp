
#include <iostream>
#include <string>

using namespace std;

string Join(string text)
{

	cout << "Please Enter your String? ";
	getline(cin, text);
	string revers1 = " ";

	for (int i = text.length() - 1; i >= 0; i--)
	{
		revers1 += text[i];
	}
	cout << revers1;

	return revers1;

}
int main()
{
	

	string text;
	 Join(text);

}
