#include <iostream>
using namespace std;

void Fibonacc()
{
int a = 1;
int b = 1;
int next;
cout << "" << a << " " << b;

for (int i = 1; i <= 10; i++)
{
	next = a + b;
	cout << " " << next << " ";

	a = b;
	b = next;

}
}

int main()
{
	Fibonacc();
}
