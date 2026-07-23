

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
void PrintMatrix2(int matrix[3][3], int matrix2[3][3], short Rows, short cols)
{
 
    int Number;
    for (short i = 0; i < Rows; i++)
    {

        for (short j = 0; j < cols; j++)
        {
			Number = matrix[i][j]; 
            if (IsNumberInMatrix(matrix2, Number, 3, 3))
            {
                cout << setw(3) << Number << "    ";
			}
            
        }

       
    }
}


int main()
{


    int Matrix[3][3] = { {77,5,12}, {22,20,1}, {1,0,9} };
    int Matrix2[3][3] = { {5,80,90}, {22,77,1}, {10,8,33} };

    cout << "\n Matrix1: \n";
    PrintMatrix(Matrix, 3, 3);
    cout << "\n Matrix2: \n";
    PrintMatrix(Matrix2, 3, 3);
    
    cout << "\n Intersected Number are: ";
    PrintMatrix2(Matrix, Matrix2, 3, 3);
    system("pause>0");
}
