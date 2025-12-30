#include <iostream>
#include <ctime>
#include <iomanip>


using namespace std;

void PrintMatrix(int Array[3][3], short Rows, short Cols)
{


    for (int y = 0; y < Rows; y++)
    {
        for (int x = 0; x < Cols; x++)
        {
            //printf(" %0*d    ", 2, Array[y][x]);
            cout << setw(3) << Array[y][x] << "     ";
        }
        cout << endl;
    }
}

int CountNumberInMatrix(int Array[3][3], short Rows, short Cols, int Number)
{
    int Counter = 0;

    for (short y = 0; y < Rows; y++)
    {

        for (short x = 0; x < Cols; x++)
        {
            if (Number == Array[y][x])
            {
                Counter++;
            }

        }
    }
    return Counter;
}


bool IsSparseMatrix(int Array[3][3], short Rows, short Cols)
{
    short MatrixSize = Rows * Cols;

    return (CountNumberInMatrix(Array, 3, 3, 0) >= (MatrixSize / 2));


}






int main()
{

    int Array[3][3] = { {9,0,1},{0,9,0},{0,0,0} };


    cout << "Matrix 1 : " << endl;
    PrintMatrix(Array, 3, 3);
    cout << endl;

    if(IsSparseMatrix(Array, 3, 3))
        cout << "\nYES : It is Sparse ! ";
    else
        cout << "\nNO : It's Not Sparse ! ";
    

    cout << endl;

    

    return 0;
}