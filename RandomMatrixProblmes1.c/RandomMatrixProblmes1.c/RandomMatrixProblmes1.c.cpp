
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
            arr[i][j] = RandomNumber(1, 100);
            
        }
    }
}
void PrintMatrix(int arr[3][3], short Rows, short cols)
{
   
    for (short i = 0; i < Rows; i++)
    {
       
        for (short j = 0; j < cols; j++)
        {
            
            cout << setw(3) << arr[i][j] << "    ";
        }
       
        cout << "\n";
       
    }
}
int ColsSum(int arr[3][3],short RowNumber, short Cols)
{
    int Sum = 0;

    for (short j = 0; j < Cols; j++)
    {
        Sum += arr[j][RowNumber];
    }
    return Sum;
}
void sumMatixRows(int arr[3][3], int Sumarr[3], short Rows, short Cols)
{
    for (short i = 0; i < Cols; i++)
    {
        Sumarr[i] = ColsSum(arr, i, Rows);

    }
}
void PrintEachRowSum(int arr[3],short Cols)
{
    cout << "\nThe following are the sum of each row in the matrix:\n";
    for (short i = 0; i < Cols; i++)
    {
        cout << " Col " << i + 1 << " Sum = " << arr[i] << endl;
    }
}
int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3];
    int Sumarr[3];
    
        FillmatrixWithRandomNumbers(arr, 3, 3);
        cout << "\n The following is a 3x3 random matrix: \n";
        
        PrintMatrix(arr, 3, 3);

        sumMatixRows(arr, Sumarr, 3, 3);
        PrintEachRowSum(Sumarr, 3);
        
      
       
        system("pause>0");

    }