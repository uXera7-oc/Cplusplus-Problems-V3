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


bool CheckIdentityMatrice(int Array[3][3] , short Rows , short Cols)
{
    

        for (short y = 0; y < Rows; y++)
        {
            for (short x = 0; x < Cols; x++)
            {
                if (y == x && Array[y][x] != 1)
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


     //To Try 2 Cases
    int Array1[3][3] = {{1,0,0},{0,1,0},{0,0,1}};
    //int Array1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};


    cout << "Matrix 1 : " << endl;
    PrintMatrix(Array1, 3, 3);

    cout << endl;


    //----> To Confirme : Try First Case then Second one
    if (CheckIdentityMatrice(Array1, 3, 3))
        cout << "\nYES : Matrix is Identity ! ";
    else
        cout << "\nNO : Matrix is Not Identitys ! ";

    cout << endl;


    




    return 0;
}