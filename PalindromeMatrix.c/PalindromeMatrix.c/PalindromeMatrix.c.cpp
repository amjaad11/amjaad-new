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


int  IsPalinderomeMatrix(int Matrix[3][3], short Rows, short cols)
{


    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < cols / 2; j++)
        {
            if (Matrix[i][j] != Matrix[i][cols - 1 - j])
            {

                return false;
            }

        }
    }
    return  true;
}

int main()
{


    int Matrix[3][3] = { {1,2,1}, {5,5,5}, {7,3,7} };
   
    cout << "\n Matrix1: \n";
    PrintMatrix(Matrix, 3, 3);

  
 

    if (IsPalinderomeMatrix(Matrix, 3, 3))
    {

        cout << "\n Yes: Matrix is palinderomeMatrix \n";
    }
    else
        cout << "\n No: Matrix is palinderomeMatrix \n";

    system("pause>0");
}
