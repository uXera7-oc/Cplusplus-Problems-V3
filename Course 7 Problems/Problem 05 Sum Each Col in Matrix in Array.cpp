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
int ColSum(int Array[3][3], short ColsNumber, short Rows)
{
    int Sum = 0;
    for (short i = 0; i <= Rows - 1; i++)
    {
        Sum += Array[i][ColsNumber];
    }
    return Sum;
}

void FillArrayWithColSums(int Array[3][3], int ArrayS[3], short Rows, short Cols)
{
    for (int i = 0; i < Cols; i++)
    {
        ArrayS[i] = ColSum(Array, i, Rows);
    }

}

void PrintEachColSumArray(int ArrayS[3], short Cols)
{
    cout << "The follwoing are the sum of Column in the matrix in Array : " << endl;


    for (short i = 0; i < Cols; i++)
    {
        cout << " Col " << i + 1 << " Sum = " << ArrayS[i] << endl;

    }

}






int main()
{
    //Seeds the random number generator in C++ , Called only once !
    srand((unsigned)time(NULL));

    int Array[3][3];
    int ArrayS[3];

    FillMatrixWithRandomNumbers(Array, 3, 3);

    cout << "The Following is a 3x3 Random Matrix : " << endl;
    PrintMatrix(Array, 3, 3);
    cout << endl;

    FillArrayWithColSums(Array, ArrayS, 3, 3);

    PrintEachColSumArray(ArrayS, 3);




    return 0;
}

