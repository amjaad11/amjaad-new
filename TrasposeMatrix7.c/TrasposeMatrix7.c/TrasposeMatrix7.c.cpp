
#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>

using namespace std;


void FillmatrixWithRandomNumbers(int arr[3][3], short Rows, short cols)
{

    short counter = 0;
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            counter++;
            arr[i][j] = counter;
        }
    }
}
void PrintMatrix(int arr[3][3], short Rows, short cols)
{

    for (short i = 0; i < Rows; i++)
    {

        for (short j = 0; j < cols; j++)
        {

            cout << " " << arr[i][j] << "   ";
        }

        cout << "\n";

    }
}



void TransposeMatrix(int arr[3][3], int arrTransposed[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {

        for (short j = 0; j < Cols; j++)
        {

            arrTransposed[i][j] = arr[j][i];
        }

    }
}
int main()
{

    int arr[3][3], arrTransposed[3][3];

    FillmatrixWithRandomNumbers(arr, 3, 3);
    cout << "\n The following is a 3x3 random matrix: \n";

   
    TransposeMatrix(arr , arrTransposed, 3, 3);
    PrintMatrix(arrTransposed, 3, 3);
    
    

    system("pause>0");

}