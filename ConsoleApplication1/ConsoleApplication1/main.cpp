
#include <iostream>
#include "lib.h";
#include "Myinput.h";			
using namespace std;
using namespace lib;
using namespace MyNamespace;
int main()
{
	Test();
	cout << Sum2Numbers(3, 5) << endl;
	int Number = ReadNumber();
	cout << Number << endl;					
	return 0;
}