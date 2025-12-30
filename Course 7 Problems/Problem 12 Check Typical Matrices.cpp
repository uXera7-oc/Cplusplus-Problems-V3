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


bool CheckTypicalMatrices(int Array1[3][3], int Array2[3][3] , short Rows , short Cols)
{
    

        for (short y = 0; y < Rows; y++)
        {
            for (short x = 0; x < Cols; x++)
            {
                if (Array1[y][x] != Array2[y][x])
                {
                    return 0;
                }
            }
        }

    return 1;

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


    //----> To Confirme : Replace Array2 With Array1 it should print : "\nYES : Both Matrices Are Typical ! "
    if (CheckTypicalMatrices(Array1, Array2, 3, 3))
        cout << "\nYES : Both Matrices Are Typical ! ";
    else
        cout << "\nNO : Matrices Are Not Typical ! ";

    cout << endl;


    




    return 0;
}