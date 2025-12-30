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
    //Array [Row : y] [Colum : x]

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

int RowSum(int Array[3][3], short RowNumber, short Cols)
{
    int Sum = 0;
    for (short i = 0; i <= Cols - 1; i++)
    {
        Sum += Array[RowNumber][i];
    }
    return Sum;
}

void FillArrayWithSums(int Array[3][3], int ArrayS[3], short Rows, short Cols)
{

    for (int i = 0; i < Rows; i++)
    {
        ArrayS[i] = RowSum(Array, i, Cols);
    }
}

void PrintEachRowSumArray(int ArrayS[3], short Rows)
{
    cout << "The follwoing are the sum of each Row in the matrix in Array : " << endl;

    for (short i = 0; i < Rows; i++)
    {
        cout << " Row " << i + 1 << " Sum = " << ArrayS[i] << endl;
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

    FillArrayWithSums(Array, ArrayS, 3, 3);



    PrintEachRowSumArray(ArrayS, 3);




    return 0;
}