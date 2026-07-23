
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
            if (Matrix[i][j] == Number )
            {
                count++;
            }

        }
    }
    return  count;
}

int main()
{


    int Matrix[3][3] = { {9,1,12}, {0,9,1}, {0,9,9} };

    cout << "\n Matrix1: \n";
    PrintMatrix(Matrix, 3, 3);

    int Number;
    cout << "\nEnter the number to count in materix? ";
    cin >> Number;

        cout << "\nNumber " << Number <<  "count in matrix is" << CountNumberInMatrix(Matrix, Number, 3, 3);

        system("pause>0");
    }



