#include <iostream>
#include <string> 
using namespace std;
string replaceWord(string original, string oldWord, string newWord, bool matchCase) {
	string result = original;
	int pos = 0;
	while (true) {
		if (matchCase)
		{
			pos = result.find(oldWord, pos);
		}

		else
		{
		string lowerResult = result;
		string lowerWord = oldWord;
		for (int i = 0; i < lowerResult.length(); i++)
			lowerResult[i] = tolower(lowerResult[i]);

        for (int i = 0; i < lowerWord.length(); i++)

	lowerWord[i] = tolower(lowerWord[i]);
pos = lowerResult.find(lowerWord, pos); 
		}
		if (pos == string::npos)
			break;
		result = result.substr(0, pos) + newWord + result.substr(pos + oldWord.length());
		pos += newWord.length();
	}
	return result;
}
int main() {
	string original = "Welcome to Jordan , Jordan is a nice country";
	cout << "Original String:" << endl;
	cout << original << endl << endl;
	cout << "Replace with match case:" << endl;
	cout << replaceWord(original, "jordan", "USA", true) << endl << endl;
	cout << "Replace with dont match case:" << endl;
	cout << replaceWord(original, "jordan", "USA", false) << endl;
	return 0;
}