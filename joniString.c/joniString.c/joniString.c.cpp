#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

string Join(vector<string> words, string Delim)
{
	string result = " ";
	
      for(int i = 0; i < words.size(); i++)
	  {
		  result += words[i];
		if (i != words.size() - 1)
		{
			result += Delim;
		}
	}
return result;
	
}
int main()
{
	cout << "Vector after Join: \n";
	vector<string> words = { "amjaad", "hassna", "marim" };
	string result = Join(words, ",");
	cout << result << endl;
}