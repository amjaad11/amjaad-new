
#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{

    int randNum = rand() % (To - From + 1) + From;

    return randNum;
}
void FillmatrixWithRandomNumbers(int arr[3][3], short Rows, short cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = RandomNumber(1, 10);
        }
    }
}
void PrintMatrix(int arr[3][3], short Rows, short cols)
{

    for (short i = 0; i < Rows; i++)
    {

        for (short j = 0; j < cols; j++)
        {
            printf("%0*d  ", 2, arr[i][j]);
            //  cout << setw(3) << arr[i][j] << "    ";
        }

        cout << "\n";
    }
}

int Sumofmatrix(int arr[3][3], short Row, short Cols)
{
    short sum = 0;

    for (short i = 0; i < Row; i++)
    {

        for (short j = 0; j < Cols; j++)
        {
            sum +=  arr[i][j];
        }
        cout << "\n";
    }
    return sum;
}



int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];
    FillmatrixWithRandomNumbers(arr, 3, 3);
    cout << "\n Matrix1: \n";
    PrintMatrix(arr, 3, 3);

  cout <<"sum of matrix is" << Sumofmatrix(arr, 3, 3);

    

    system("pause>0");
}