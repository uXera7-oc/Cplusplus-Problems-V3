#include <iostream>
#include <ctime>
#include <iomanip>


using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);


    return Number;
}

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

bool IsItThere(int Array[3][3], short Rows, short Cols, int Number)
{

    for (short y = 0; y < Rows; y++)
    {

        for (short x = 0; x < Cols; x++)
        {
            if (Number == Array[y][x])
            {
                return true;
            }

        }
    }
    return false;
}


    






int main()
{
    //Seeds the random number generator in C++ , Called only once !
    srand((unsigned)time(NULL));


    int Array[3][3];

    FillMatrixWithRandomNumbers(Array, 3, 3);

    cout << "Matrix 1 : " << endl;
    PrintMatrix(Array, 3, 3);
    cout << endl;

    int Number = ReadPositiveNumber("Please Enter the Number to look for in matrix ? ");

    if(IsItThere(Array, 3, 3,Number))
        cout << "\nYES : It is There ! ";
    else
        cout << "\nNO : It's Not There ! ";
    

    cout << endl;

    

    return 0;
}