
#include <iostream>
#include <cmath>
using namespace std;

int Mypower(int Base, int Power)
{
    
   if (Power == 0)
	   return 1;
   else
   {
       return (Base * Mypower(Base, Power - 1));

   }
    
}
int main()
{
   cout << Mypower(2, 4);
  
   return 0;


}



