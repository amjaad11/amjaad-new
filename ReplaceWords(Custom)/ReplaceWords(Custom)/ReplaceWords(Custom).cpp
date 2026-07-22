
#include <iostream>
#include <string>

using namespace std;

void Replacewords(string original)
{

	cout << "Original string  " << endl;
	
	original = "Welcome to Jed , Jed is nice";

	int num;
	
		if (original.find("jed") != string::npos)
		{
			num = original.find("Jed");
			cout << "i found " << num << endl;

		}
		else
		{
			cout << " no match found \n ";
		}
		
		
			
}
int main()
			{
				string text;
				Replacewords(text);
			}