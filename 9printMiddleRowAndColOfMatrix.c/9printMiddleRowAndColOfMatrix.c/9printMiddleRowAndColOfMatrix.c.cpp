
//#include <iostream>m
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

void printmiddleRowofmatrix(int arr[3][3], short Row, short Cols)
{
    short MiddleRow = Row / 2;
    
    for (short i = 0; i < Cols; i++)
    {
        printf("%0*d  ", 2,arr[MiddleRow][i]);
        cout << "\n";
    }
}

void printmiddleColsofmatrix(int arr[3][3], short Row, short Cols)
{
    short MiddleCols = Cols / 2;

    for (short i = 0; i < Cols; i++)
    {
        printf(" %0*d  ", 2,arr[i][MiddleCols]);
        cout << "\n";
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];
    FillmatrixWithRandomNumbers(arr, 3, 3);
    cout << "\n Matrix1: \n";
    PrintMatrix(arr, 3, 3);
   
    cout << "\nMiddle Row of Matrix is:\n";
    printmiddleRowofmatrix(arr, 3, 3);
   
    cout << "\nMiddle Cols of Matrix is:\n";
    printmiddleColsofmatrix(arr, 3, 3);

    system("pause>0");
}