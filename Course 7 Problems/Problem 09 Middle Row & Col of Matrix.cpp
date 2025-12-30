//Without Printf

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
            Array[y][x] = RandomNumbers(1, 10);
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

void PrintOnlyMiddleRowOfMatrix(int Array[3][3], short Rows, short Cols)
{
    for (int y = 1; y <= 1; y++)
    {
        for (int x = 0; x < Cols; x++)
        {
            cout << setw(3) << Array[y][x] << "     ";
        }
        cout << endl;
    }

}

void PrintOnlyMiddleColOfMatrix(int Array[3][3], short Rows, short Cols)
{
    for (int y = 1; y <= 1; y++)
    {
        for (int x = 0; x < Cols; x++)
        {
            cout << setw(3) << Array[x][y] << "     ";
        }
        cout << endl;
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

    cout << "Middle Row of Matrix is : " << endl;
    PrintOnlyMiddleRowOfMatrix(Array, 3, 3);


    cout << endl;

    cout << "Middle Col of Matrix is : " << endl;
    PrintOnlyMiddleColOfMatrix(Array, 3, 3);

    return 0;
}

======================================================================================
//With Printf

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
            Array[y][x] = RandomNumbers(1, 10);
        }
    }

}

void PrintMatrix(int Array[3][3], short Rows, short Cols)
{


    for (int y = 0; y < Rows; y++)
    {
        for (int x = 0; x < Cols; x++)
        {
            printf(" %0*d    ", 2, Array[y][x]);
            //cout << setw(3) << Array[y][x] << "     ";
        }
        cout << endl;
    }
}

void PrintOnlyMiddleRowOfMatrix(int Array[3][3], short Rows, short Cols)
{
    for (int y = 1; y <= 1; y++)
    {
        for (int x = 0; x < Cols; x++)
        {
            printf(" %0*d    ", 2, Array[y][x]);
            //cout << setw(3) << Array[y][x] << "     ";
        }
        cout << endl;
    }

}

void PrintOnlyMiddleColOfMatrix(int Array[3][3], short Rows, short Cols)
{
    for (int y = 1; y <= 1; y++)
    {
        for (int x = 0; x < Cols; x++)
        {
            printf(" %0*d    ", 2, Array[y][x]);
            //cout << setw(3) << Array[x][y] << "     ";
        }
        cout << endl;
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

    cout << "Middle Row of Matrix is : " << endl;
    PrintOnlyMiddleRowOfMatrix(Array, 3, 3);


    cout << endl;

    cout << "Middle Col of Matrix is : " << endl;
    PrintOnlyMiddleColOfMatrix(Array, 3, 3);

    return 0;
}


