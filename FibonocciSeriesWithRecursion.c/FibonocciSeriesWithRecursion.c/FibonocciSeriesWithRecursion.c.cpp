#include <iostream>
using namespace std;

void Fibonacc(int i,int n ,int a, int b)
{


	if (i > n)
	
		return;
		
		
		cout <<  a << " ";
		Fibonacc(i + 1,n, b,a + b);
		
		
		
	
}

int main()
{
	Fibonacc(1,10,1,1);
}