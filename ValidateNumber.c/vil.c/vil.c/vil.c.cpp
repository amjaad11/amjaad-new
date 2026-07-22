
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void stringlength()
{

	char lattar[] = { 'A','a','I','i','U','u','O','o' };
	char mylattar;

	cout << "Please Enter character? \n";
	cin >> mylattar;
	bool found = false;
	
	for (int i = 0; i < 4; i++)
	{

		if (mylattar == lattar[i])
		{
			
			cout << "YES Letter ' a is vowel" << endl;
			found = true;
			break;

		}
	}
		if (!found)
		{
			cout << "NO it's not " << endl;
		}

	
}
int main()
{
	stringlength();
}
