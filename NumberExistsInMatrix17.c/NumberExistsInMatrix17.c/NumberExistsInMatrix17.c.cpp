#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>

using namespace std;



void PrintMatrix(int arr[3][3], short Rows, short cols)
{

    for (short i = 0; i < Rows; i++)
    {

        for (short j = 0; j < cols; j++)
        {
            // printf("%0*d  ", 2, arr[i][j]);
            cout << setw(3) << arr[i][j] << "    ";
        }

        cout << "\n";
    }
}

short CountNumberInMatrix(int Matrix[3][3], int Number, short Rows, short cols)
{

    short count = 0;
	
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            if (Matrix[i][j] == Number)
            {

                count++;
               
            }

        }
    }
    return  count;
}
bool IsNumberInMatrix(int Matrix[3][3], int Number, short Rows, short cols)
{


    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            if (Matrix[i][j] == Number)
            {

                return true;
            }

        }
    }
    return  false;
}

int main()
{

    
    int Matrix[3][3] = { {77,5,12}, {22,20,1}, {1,0,9} };

    cout << "\n Matrix1: \n";
    PrintMatrix(Matrix, 3, 3);
    
    int Number;
    cout << "Please Enter the number to look for in matrix? ";
    cin >> Number;

    //Using Count is a slower method
    
    if (CountNumberInMatrix(Matrix, Number, 3, 3) > 0)
   
        cout << "\n Yes: it's there \n";
    else
		cout << "\n No: it's not there \n";     
    
    system("pause>0");
}
