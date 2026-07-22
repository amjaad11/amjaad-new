
#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int  stringlength(string text)
{

	

	int start = 0;

	for (int i = 0; i < text.length(); i++)
	{

		if (text[i] != ' ')
		{
			start = i;
			break;
		}
	}

	cout << "string     =" << text << endl;
	cout << "Trim Left  = ";

	for (int i = start; i < text.length(); i++)
	{
		cout << text[i];

	}
	return start;
}



int stringlength1(string text)
{



	text = "  amjaad  \n";;

	int end = 0;


	for (int i = text.length() - 1; i >= 0; i--)
	{

		if (text[i] != ' ')
		{
			end = i;
			break;
		}
	}




	cout <<"trim right =  ";

	for (int i = 0; i <= end; i++)
	{
		cout << text[i];

	}
	return end;
}
void trimAll(string text)
{
	
	int start1 = stringlength(text);
	int end = stringlength1(text);
	cout << "Trim       = ";
	for (int i = start1; i <= end; i++)
	{
		cout << text[i];
	}

}
int main()
{
	string text = "  amjaad  \n";
	trimAll(text);
	return 0;
}