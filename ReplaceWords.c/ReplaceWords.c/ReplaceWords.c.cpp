
#include <iostream>
#include <string>

using namespace std;

void Replacewords(string original)
{
	
	cout << "Original string  " << endl;
	cout <<"Welcome to Usa , Usa is nice \n\n ";
	original = "Welcome to Usa , Usa is nice";
	
	
	for (int i = 0; i < original.length(); i++)
	{
		if (original.find("Usa"))
		{
			original.replace(11,3,"ksa");
			original.replace(17, 3, "ksa");
		}
	}
	cout << " after The changing \n";
	cout << original << endl;
}
int main()
{

	string text;
	Replacewords(text);

}
