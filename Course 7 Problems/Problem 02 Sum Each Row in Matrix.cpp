#include <iostream>
#include <ctime>
#include <iomanip>


using namespace std;

int RandomNumbers(int From, int To)
{
    int Random = rand() % (To - From + 1) + From;
    return Random;

}

void FillMatrixWithRandomNumbers(int Array[3][3],short Rows , short Cols)
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

void PrintSumOfRows(int Array[3][3], short Rows)
{
    int SumR1 = 0; int SumR2 = 0;  int SumR3 = 0;

    for (int y = 0; y < Rows; y++)
    {
           SumR1 = SumR1 + Array[0][y];
           SumR2 = SumR2 + Array[1][y];
           SumR3 = SumR3 + Array[2][y];
    }
    cout << "Row 1 Sum = "  << SumR1 << endl;
    cout << "Row 2 Sum = "  << SumR2 << endl;
    cout << "Row 3 Sum = "  << SumR3 << endl;
    
}






int main()
{
    //Seeds the random number generator in C++ , Called only once !
    srand((unsigned)time(NULL));

    int Array[3][3];

    FillMatrixWithRandomNumbers(Array, 3, 3);

    cout << "The Following is a 3x3 Random Matrix : " << endl;
    PrintMatrix(Array,3,3);
    cout << endl;

    cout << "The Following are the sum of each row in the matrix : " << endl;
    PrintSumOfRows(Array,3);
    



    return 0;
}

========================================================================================
//Perfect Solution 

#include <iostream>
#include <ctime>
#include <iomanip>


using namespace std;

int RandomNumbers(int From, int To)
{
    int Random = rand() % (To - From + 1) + From;
    return Random;

}

void FillMatrixWithRandomNumbers(int Array[3][3],short Rows , short Cols)
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

int RowSum(int Array[3][3], short RowNumber, short Cols)
{
    int Sum = 0;
    for (short i = 0; i <= Cols - 1; i++)
    {
        Sum += Array[RowNumber][i];
    }
    return Sum;
}

void PrintEachRowSum(int Array[3][3], short Rows,short Cols)
{
    cout << "The follwoing are the sum of the matrix : " << endl;


    for (short i = 0; i < Rows; i++)
    {
        cout << "Row " << i + 1 << " Sum = " << RowSum(Array, i, 3) << endl;

    }
    
}






int main()
{
    //Seeds the random number generator in C++ , Called only once !
    srand((unsigned)time(NULL));

    int Array[3][3];

    FillMatrixWithRandomNumbers(Array, 3, 3);

    cout << "The Following is a 3x3 Random Matrix : " << endl;
    PrintMatrix(Array,3,3);
    cout << endl;

    PrintEachRowSum(Array, 3, 3);
    



    return 0;
}