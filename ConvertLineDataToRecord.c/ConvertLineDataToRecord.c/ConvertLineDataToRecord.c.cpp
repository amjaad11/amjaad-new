
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct person
{

	string accountnumber;
	int pin;
	string name;
	int Phone;
	float palance;

};

void stringlength()
{

	string text = "A150#//#1234#//#amjaad mohammad#//#079999#//#5270.0000";
	string word = "";
	vector<string> words;

	
	for (int i = 0; i < text.length(); i++)
	{

		if (text.substr(i, 4) != "#//#")
		{

			word += text[i];
		}
		else
		{
			words.push_back(word);
			word = "";
			i += 3;
		}
	}
	words.push_back(word);
	person client;

	
	client.accountnumber = words[0];
	client.pin = stoi(words[1]);

	client.name = words[2];
	
	client.Phone = stoi(words[3]);
	client.palance = stof(words[4]);

	cout << "clint for Saving is:\n";
	cout << client.accountnumber << endl; 
	cout << client.pin << endl; 
	cout << client.name << endl; 
	cout << client.Phone << endl;
	cout << client.palance << endl;
}
int main()

{
	stringlength();
}