
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
            printf("%0*d  ", 2,arr[i][j]);
          //  cout << setw(3) << arr[i][j] << "    ";
        }

        cout << "\n";
    }
}
int ColsSum(int arr[3][3], short RowNumber, short Cols)
{
    int Sum = 0;

    for (short j = 0; j < Cols; j++)
    {
        Sum += arr[j][RowNumber];
    }
    return Sum;
}
void PrintEachRowSum(int arr[3], short Cols)
{
    cout << "\n\n";
    for (short i = 0; i < Cols; i++)
    {
        cout << " Col " << i + 1 << " Sum = " << arr[i] << endl;
    }
}
void MultiplyMatrix(int Matrix1[3][3], int Matrix2[3][3], int MatrxResultsMatrix[3][3], short Rows, short Cols)
{

    for (short i = 0; i < Rows; i++)
    {

        for (short j = 0; j < Cols; j++)
        {
            MatrxResultsMatrix[i][j] = Matrix1[i][j] * Matrix2[i][j];
        }
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int Matrix1[3][3],Matrix2[3][3],MatrxResultsMatrix[3][3];
    FillmatrixWithRandomNumbers(Matrix1, 3, 3);
    cout << "\n Matrix1: \n";
    PrintMatrix(Matrix1, 3, 3);
    FillmatrixWithRandomNumbers(Matrix2, 3, 3);
    cout << "\n Matrix2: \n";
    PrintMatrix(Matrix2, 3, 3);

    MultiplyMatrix(Matrix1, Matrix2, MatrxResultsMatrix, 3, 3);
    cout << "\nResults:\n";
    PrintMatrix(MatrxResultsMatrix, 3, 3);
    system("pause>0");
}