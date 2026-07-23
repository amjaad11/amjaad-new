

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
            if (Matrix[i][j] == Number)
            {
                count++;
            }

        }
    }
    return  count;
}
bool isSparsMatrix(int Matrix[3][3], short Rows, short cols)
{
    int total = 3 * 3;

    return (CountNumberInMatrix(Matrix, 0, 3, 3) >= ceil((float)total / 2));

}
int main()
{


    int Matrix[3][3] = { {0,9,12}, {0,0,1}, {0,0,9} };

    cout << "\n Matrix1: \n";
    PrintMatrix(Matrix, 3, 3);

    if (isSparsMatrix(Matrix, 3, 3))

        cout << "Yes: it is Sperse" << endl;

    else
    
        cout << "No: its Not sparce" << endl;
    
    system("pause>0");
}
