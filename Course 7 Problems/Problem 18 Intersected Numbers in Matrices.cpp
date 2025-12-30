#include <iostream>
#include <ctime>
#include <iomanip>


using namespace std;



int RandomNumbers(int From, int To)
{
    int Random = rand() % (To - From + 1) + From;
    return Random;

}

void FillMatrixWithRandomNumbers(int Matrix[3][3], short Rows, short Cols)
{
    //Array [Row : y] [Colum : x]

    for (int y = 0; y < Rows; y++)
    {
        for (int x = 0; x < Cols; x++)
        {
            Matrix[y][x] = RandomNumbers(1, 100);
        }
    }

}

void PrintMatrix(int Matrix[3][3], short Rows, short Cols)
{

    for (int y = 0; y < Rows; y++)
    {
        for (int x = 0; x < Cols; x++)
        {
            cout << setw(3) << Matrix[y][x] << "     ";
        }
        cout << endl;
    }
}

bool IsItThere(int Matrix1[3][3],int Number, short Rows, short Cols)
{

    for (short y = 0; y < Rows; y++)
    {
        for (short x = 0; x < Cols; x++)
        {
            if (Number == Matrix1[y][x])
            {
                return true;
            }

        }
    }
    return false;
}

void PrintIntersectedNumbers(int Matrix1[3][3], int Matrix2[3][3], short Rows , short Cols)
{
    int Number;
 
    for (short y = 0; y < Rows; y++)
    {
        for (short x = 0; x < Cols; x++)
        {
            Number = Matrix1[y][x];

            if (IsItThere(Matrix2, Number, Rows, Cols))
            {
                cout << setw(3) << Number << "     ";
            }
        }
    }
}




    






int main()
{
    //Seeds the random number generator in C++ , Called only once !
    srand((unsigned)time(NULL));


    int Matrix1[3][3];
    int Matrix2[3][3];

    FillMatrixWithRandomNumbers(Matrix1, 3, 3);

    cout << "Matrix 1 : " << endl;
    PrintMatrix(Matrix1, 3, 3);
    cout << endl;

    
    FillMatrixWithRandomNumbers(Matrix2, 3, 3);

    cout << "Matrix 2 : " << endl;
    PrintMatrix(Matrix2, 3, 3);
    cout << endl;

    PrintIntersectedNumbers(Matrix1, Matrix2, 3, 3);



    cout << endl;

    

    return 0;
}