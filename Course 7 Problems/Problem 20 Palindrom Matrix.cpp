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


bool IsPalindromeMatrix(int Array[3][3], short Rows, short Cols)
{


    for (short y = 0; y < Rows; y++)
    {
        for (short x = 0; x < Cols; x++)
        {
            if (Array[0][0] != Array[2][0] && Array[1][0] != Array[2][1] && Array[2][0] != Array[2][2])
            {
                return false;

            }
            else
            {
                return true;
            }

        }
    }


}





int main()
{
    //Seeds the random number generator in C++ , Called only once !
    srand((unsigned)time(NULL));


    //To Try 2 Cases
    int Array1[3][3] = { {1,2,1},{5,5,5},{7,3,7} };
    //int Array1[3][3] = { {1,2,1},{5,5,5},{7,3,8} };


    cout << "Matrix 1 : " << endl;
    PrintMatrix(Array1, 3, 3);

    cout << endl;


    if (IsPalindromeMatrix(Array1, 3, 3))
        cout << "\nYES : Matrix is Palindrome ! ";
    else
        cout << "\nNO : Matrix is Not Palindrome ! ";

    cout << endl;



    return 0;
}

=====================================================================================
//Perfect Solution 

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


bool IsPalindromeMatrix(int Array[3][3], short Rows, short Cols)
{


    for (short y = 0; y < Rows; y++)
    {
        for (short x = 0; x < Cols / 2; x++)
        {
            if (Array[y][x] != Array[y][Cols - 1 - x])
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


    //To Try 2 Cases
    int Array1[3][3] = { {1,2,1},{5,5,5},{7,3,7} };
    //int Array1[3][3] = { {1,2,1},{5,5,5},{7,3,8} };


    cout << "Matrix 1 : " << endl;
    PrintMatrix(Array1, 3, 3);

    cout << endl;


    if (IsPalindromeMatrix(Array1, 3, 3))
        cout << "\nYES : Matrix is Palindrome ! ";
    else
        cout << "\nNO : Matrix is Not Palindrome ! ";

    cout << endl;




    return 0;
}

