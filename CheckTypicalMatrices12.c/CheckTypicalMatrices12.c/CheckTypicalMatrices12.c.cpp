
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

bool AreTypicalMatrices(int arr1[3][3], int arr2[3][3], short Rows, short cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            if (arr1[i][j] != arr2[i][j])
            {
                return false;
            }
        }
    }
    return true;
}   

int main()
{
    srand((unsigned)time(NULL));
    int Matrix1[3][3],Matrix2[3][3];
    FillmatrixWithRandomNumbers(Matrix1, 3, 3);
    cout << "\n Matrix1: \n";
    PrintMatrix(Matrix1, 3, 3);
    
    FillmatrixWithRandomNumbers(Matrix2, 3, 3);
    cout << "\n Matrix2: \n";
    PrintMatrix(Matrix2, 3, 3);

    if (AreTypicalMatrices(Matrix1, Matrix2, 3, 3))
    {
        cout << "\n yes: both matrices are typical. \n";
    }
    else
    {
        cout << "\n No: matrices are not typical. \n";
	}   

   
   
    system("pause>0");
}
