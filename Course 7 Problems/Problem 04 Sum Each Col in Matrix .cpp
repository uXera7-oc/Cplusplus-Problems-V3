#include <iostream>
#include <ctime>
#include <iomanip>


using namespace std;

int RandomNumbers(int From, int To)
{
    int Random = rand() % (To - From + 1) + From;
    return Random;

}

void FillMatrixWithRandomNumbers(int Array[3][3], short Rows, short Cols)
{
    //Array [Row : y] [Column : x]

    for (int y = 0; y < Rows; y++)
    {
        for (int x = 0; x < Cols; x++)
        {
            Array[y][x] = RandomNumbers(1, 100);
        }
    }

}

void PrintMatrix(int Array[3][3], short Rows, short Cols)
{


    for (int y = 0; y < Rows; y++)
    {
        for (int x = 0; x < Cols; x++)
        {
            cout << setw(3) << Array[y][x] << "     ";
        }
        cout << endl;
    }
}

// Switching Between Rows & Columns 
int ColSum(int Array[3][3], short ColsNumber, short Row)
{
    int Sum = 0;
    for (short i = 0; i <= Row - 1; i++)
    {
        Sum += Array[i][ColsNumber];
    }
    return Sum;
}

void PrintEachColSum(int Array[3][3], short Rows, short Cols)
{
    cout << "The follwoing are the sum of Column in the matrix : " << endl;


    for (short i = 0; i < Cols; i++)
    {
        cout << " Col " << i + 1 << " Sum = " << ColSum(Array, i, 3) << endl;

    }

}






int main()
{
    //Seeds the random number generator in C++ , Called only once !
    srand((unsigned)time(NULL));

    int Array[3][3];

    FillMatrixWithRandomNumbers(Array, 3, 3);

    cout << "The Following is a 3x3 Random Matrix : " << endl;
    PrintMatrix(Array, 3, 3);
    cout << endl;

    PrintEachColSum(Array, 3, 3);




    return 0;
}

