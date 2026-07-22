
#include <iostream>
#include <string>

using namespace std;

string Join(string words[], short length, string Delim)
{
	string word = "";
	for (int i = 0; i < length; i++)
	{
		word += words[i];
		if (i != length - 1)
		{
			word += Delim;
		}
		
	}
	return word;

}
int main()
{
	cout << "Array after Join: \n";
	string words[] = {"amjaad", "hassna", "marim"};
	cout << Join(words, 3, " ");
	
}