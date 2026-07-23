
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

bool identityMatrix(int Matrix[3][3], short Rows, short cols)
{
    
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            if (i == j && Matrix[i][j] != 1)
            {
                return false;
            }
            else if (i != j && Matrix[i][j] != 0)
            {
                return false;
            }
                 
        }
    }
    return true;
}

int main()
{
    int Matrix[3][3] = { {1,0,0}, {0,1,0},{0,0,1 } };

    cout << "\n Matrix1: \n";
    PrintMatrix(Matrix, 3, 3);

    if (identityMatrix(Matrix, 3, 3))
    {
        cout << "Yes, Matris is identity";
    }
    else
    {
        cout << "No, Matris is not identity";
    }
   
}