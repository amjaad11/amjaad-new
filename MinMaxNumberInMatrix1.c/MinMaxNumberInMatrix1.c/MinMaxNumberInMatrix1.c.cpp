
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

int minnumber(int matrix[3][3], short Rows, short cols)
{


    int min = matrix[0][0];
    for (short i = 0; i < Rows; i++)
    {

        for (short j = 0; j < cols; j++)
        {

            if (matrix[i][j] < min)
            {
                min = matrix[i][j];

            }

        }
    }
    return min;
};

int mixnumber(int matrix[3][3], short Rows, short cols)
{


    int min = matrix[0][0];
    for (short i = 0; i < Rows; i++)
    {

        for (short j = 0; j < cols; j++)
        {

            if (matrix[i][j] > min)
            {
                min = matrix[i][j];

            }

        }


    }
    return min;
};
int main()
{
    int Matrix[3][3] = { {77, 5, 12},
                         {22, 20, 6},
						 {14, 3, 9} };   

    
    

    cout << "\n Matrix1: \n";
    PrintMatrix(Matrix, 3, 3);
   
    

    
    cout << "Min number is: " << minnumber(Matrix,3, 3) << endl;
    cout  << "Max number is: " << mixnumber(Matrix, 3, 3) << endl;
    
    system("pause>0");
}