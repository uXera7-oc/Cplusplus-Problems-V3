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

int MinNumberInMatrix(int Matrix1[3][3], short Rows , short Cols)
{
    int Min = Matrix1[0][0];
 
    for (short y = 0; y < Rows; y++)
    {
        for (short x = 0; x < Cols; x++)
        {
            if (Matrix1[y][x] < Min)
            {
                Min = Matrix1[y][x];
                
            }
        }
    }
    return Min;
}

int MaxNumberInMatrix(int Matrix1[3][3], short Rows , short Cols)
{
    int Max = Matrix1[0][0];
 
    for (short y = 0; y < Rows; y++)
    {
        for (short x = 0; x < Cols; x++)
        {
            if (Matrix1[y][x] > Max)
            {
                Max = Matrix1[y][x];
                
            }
        }
    }
    return Max;
}




    






int main()
{
    //Seeds the random number generator in C++ , Called only once !
    srand((unsigned)time(NULL));


    int Matrix1[3][3];

    FillMatrixWithRandomNumbers(Matrix1, 3, 3);

    cout << "Matrix 1 : " << endl;
    PrintMatrix(Matrix1, 3, 3);
    cout << endl;

    cout << "Minimum Number is : " << MinNumberInMatrix(Matrix1, 3, 3);
    cout << endl;

    cout << "Maximum Number is : " << MaxNumberInMatrix(Matrix1, 3, 3);



    cout << endl;

    

    return 0;
}