//With String Function 

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

int SumOfMatrix(int Array[3][3], short Rows, short Cols)
{
    int Sum = 0;

    for (int y = 0; y < Rows; y++)
    {
        for (int x = 0; x < Cols; x++)
        {

            Sum += Array[y][x];
        }

    }

    return Sum;
}

string CheckMatricesEquality(int Array1[3][3], int Array2[3][3] , short Rows , short Cols)
{
    if (SumOfMatrix(Array1, Rows, Cols) == SumOfMatrix(Array2, Rows, Cols))
        return "Matrices are Equal ! ";
    else
        return "Matrices are Not Equal ! ";

}





int main()
{
    //Seeds the random number generator in C++ , Called only once !
    srand((unsigned)time(NULL));

    int Array1[3][3];
    int Array2[3][3];

    FillMatrixWithRandomNumbers(Array1, 3, 3);

    cout << "Matrix 1 : " << endl;
    PrintMatrix(Array1, 3, 3);

    cout << endl;

    FillMatrixWithRandomNumbers(Array2, 3, 3);

    cout << "Matrix 2 : " << endl;
    PrintMatrix(Array2, 3, 3);

    cout << endl;

    cout << CheckMatricesEquality(Array1, Array2, 3, 3);

    cout << endl;


    




    return 0;
}

==================================================================================================
//With Bool Function

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

int SumOfMatrix(int Array[3][3], short Rows, short Cols)
{
    int Sum = 0;

    for (int y = 0; y < Rows; y++)
    {
        for (int x = 0; x < Cols; x++)
        {

            Sum += Array[y][x];
        }

    }

    return Sum;
}

bool CheckMatricesEquality(int Array1[3][3], int Array2[3][3] , short Rows , short Cols)
{
    return (SumOfMatrix(Array1, Rows, Cols) == SumOfMatrix(Array2, Rows, Cols));

}





int main()
{
    //Seeds the random number generator in C++ , Called only once !
    srand((unsigned)time(NULL));

    int Array1[3][3];
    int Array2[3][3];

    FillMatrixWithRandomNumbers(Array1, 3, 3);

    cout << "Matrix 1 : " << endl;
    PrintMatrix(Array1, 3, 3);

    cout << endl;

    FillMatrixWithRandomNumbers(Array2, 3, 3);

    cout << "Matrix 2 : " << endl;
    PrintMatrix(Array2, 3, 3);


    if (CheckMatricesEquality(Array1, Array2, 3, 3))
        cout << "\nYES : Both Matrices Are Equal ! ";
    else
        cout << "\nNO : Matrices Are Not Equal ! ";

    cout << endl;


    




    return 0;
}

