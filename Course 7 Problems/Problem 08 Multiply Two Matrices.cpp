

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


void Multiply2Matrices(int Array1[3][3], int Array2[3][3], int ArrayResult[3][3], short Rows, short Cols)
{
    for (int y = 0; y < Rows; y++)
    {
        for (int x = 0; x < Cols; x++)
        {
            ArrayResult[y][x] = Array1[y][x] * Array2[y][x];
        }
    }


}

void PrintResultAfterMultiplying(int ArrayResult[3][3], short Rows, short Cols)
{
    for (int y = 0; y < Rows; y++)
    {
        for (int x = 0; x < Cols; x++)
        {
            printf(" %0*d    ", 2, ArrayResult[y][x]);
            //cout << setw(3) << ArrayResult[y][x] << "     ";
        }
        cout << endl;
    }

}






int main()
{
    //Seeds the random number generator in C++ , Called only once !
    srand((unsigned)time(NULL));

    int Array1[3][3];
    int Array2[3][3];
    int ArrayResult[3][3];

    FillMatrixWithRandomNumbers(Array1, 3, 3);

    cout << "Matrix 1 : " << endl;
    PrintMatrix(Array1, 3, 3);

    cout << endl;


    FillMatrixWithRandomNumbers(Array2, 3, 3);
    cout << "Matrix 2 : " << endl;
    PrintMatrix(Array2, 3, 3);

    Multiply2Matrices(Array1, Array2, ArrayResult, 3, 3);
    cout << "Results : " << endl;
    PrintResultAfterMultiplying(ArrayResult, 3, 3);


    return 0;
}

==========================================================================================

//Without Print Result Function 


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


void Multiply2Matrices(int Array1[3][3], int Array2[3][3], int ArrayResult[3][3], short Rows, short Cols)
{
    for (int y = 0; y < Rows; y++)
    {
        for (int x = 0; x < Cols; x++)
        {
            ArrayResult[y][x] = Array1[y][x] * Array2[y][x];
        }
    }


}






int main()
{
    //Seeds the random number generator in C++ , Called only once !
    srand((unsigned)time(NULL));

    int Array1[3][3];
    int Array2[3][3];
    int ArrayResult[3][3];

    FillMatrixWithRandomNumbers(Array1, 3, 3);

    cout << "Matrix 1 : " << endl;
    PrintMatrix(Array1, 3, 3);

    cout << endl;


    FillMatrixWithRandomNumbers(Array2, 3, 3);
    cout << "Matrix 2 : " << endl;
    PrintMatrix(Array2, 3, 3);

    Multiply2Matrices(Array1, Array2, ArrayResult, 3, 3);
    cout << "Results : " << endl;
    PrintMatrix(ArrayResult, 3, 3);


    return 0;
}





