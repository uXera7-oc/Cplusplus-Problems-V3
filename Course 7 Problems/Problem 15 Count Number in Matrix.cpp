#include <iostream>
#include <ctime>
#include <iomanip>


using namespace std;

void PrintMatrix(int Array[3][3], short Rows, short Cols)
{


    for (int y = 0; y < Rows; y++)
    {
        for (int x = 0; x < Cols; x++)
        {
            //printf(" %0*d    ", 2, Array[y][x]);
            cout << setw(3) << Array[y][x] << "     ";
        }
        cout << endl;
    }
}


int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number < 0);


    return Number;
}


int CountNumberInMatrix(int Array[3][3], short Rows, short Cols,int Number)
{
    int Counter = 0;

    for (short y = 0; y < Rows; y++)
    {

        for (short x = 0; x < Cols; x++)
        {
            if (Number == Array[y][x])
            {
                Counter++;
            }



        }
    }
    return Counter;
}

void PrintResult(int Counter,int Number)
{
    cout << "Number " << Number << " count in matrix is " << Counter << endl;
}





int main()
{
    //Seeds the random number generator in C++ , Called only once !
    srand((unsigned)time(NULL));

    int Counter;
    int Array[3][3] = { {9,0,0},{0,9,0},{0,9,9} };
    //int Array1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};


    cout << "Matrix 1 : " << endl;
    PrintMatrix(Array, 3, 3);
    cout << endl;

    int Number = ReadPositiveNumber("Enter the Number to count in Matrix ? ");

    cout << endl;

    Counter = CountNumberInMatrix(Array, 3, 3, Number);

    PrintResult(Counter, Number);


    cout << endl;


    return 0;
}