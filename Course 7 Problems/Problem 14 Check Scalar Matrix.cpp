//Not The Perfect Way

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


bool CheckScalarMatrix(int Array[3][3], short Rows, short Cols,short Number)
{

        for (short y = 0; y < Rows; y++)
        {
            for (short x = 0; x < Cols; x++)
            {
                if (y == x && Array[y][x] != Number)
                {
                    return false; 

                }
                else if (y != x && Array[y][x] != 0)
                {
                     return false;
                }
               
            }
        }
        return true;


}





int main()
{
    //Seeds the random number generator in C++ , Called only once !
    srand((unsigned)time(NULL));

    //For Example Number 9
    int Array1[3][3] = { {9,0,0},{0,9,0},{0,0,9} };
    //int Array1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int Number;

    cout << "Matrix 1 : " << endl;
    PrintMatrix(Array1, 3, 3);

    cout << endl;


    //----> To Confirme : Replace Array2 With Array1 it should print : "\nYES : Both Matrices Are Typical ! "
    if (CheckScalarMatrix(Array1, 3, 3,9))
        cout << "\nYES : Matrix is Scalar ! ";
    else
        cout << "\nNO : Matrix is Not Scalar ! ";

    cout << endl;


    




    return 0;
}

===================================================================
//Perfect Ways

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


bool CheckScalarMatrix(int Array[3][3], short Rows, short Cols)
{

        for (short y = 0; y < Rows; y++)
        {
            for (short x = 0; x < Cols; x++)
            {
                if (y == x && Array[y][x] != x)
                {
                    return false; 

                }
                else if (y != x && Array[y][x] != 0)
                {
                     return false;
                }
               
            }
        }
        return true;


}





int main()
{
    //Seeds the random number generator in C++ , Called only once !
    srand((unsigned)time(NULL));

    int Array1[3][3] = { {9,0,0},{0,7,0},{0,0,9} };
    //int Array1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    cout << "Matrix 1 : " << endl;
    PrintMatrix(Array1, 3, 3);

    cout << endl;


    //----> To Confirme : Replace Array2 With Array1 it should print : "\nYES : Both Matrices Are Typical ! "
    if (CheckScalarMatrix(Array1, 3, 3))
        cout << "\nYES : Matrix is Scalar ! ";
    else
        cout << "\nNO : Matrix is Not Scalar ! ";

    cout << endl;


    




    return 0;
}
========================================================

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


bool CheckScalarMatrix(int Array[3][3], short Rows, short Cols)
{
    int FirstDiagonalElement = Array[0][0];

        for (short y = 0; y < Rows; y++)
        {
            for (short x = 0; x < Cols; x++)
            {
                if (y == x && Array[y][x] != FirstDiagonalElement)
                {
                    return false; 

                }
                else if (y != x && Array[y][x] != 0)
                {
                     return false;
                }
               
            }
        }
        return true;


}





int main()
{
    //Seeds the random number generator in C++ , Called only once !
    srand((unsigned)time(NULL));

    int Array1[3][3] = { {9,0,0},{0,9,0},{0,0,9} };
    //int Array1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    cout << "Matrix 1 : " << endl;
    PrintMatrix(Array1, 3, 3);

    cout << endl;


    //----> To Confirme : Replace Array2 With Array1 it should print : "\nYES : Both Matrices Are Typical ! "
    if (CheckScalarMatrix(Array1, 3, 3))
        cout << "\nYES : Matrix is Scalar ! ";
    else
        cout << "\nNO : Matrix is Not Scalar ! ";

    cout << endl;


    




    return 0;
}