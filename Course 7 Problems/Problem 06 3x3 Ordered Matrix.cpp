#include <iostream>
#include <iomanip>


using namespace std;


void FillMatrixWithOrderedNumbers(int Array[3][3], short Rows, short Cols)
{
    //Array [Row : y] [Colum : x]

    int i = 1;
    for (int y = 0; y < Rows; y++)
    {
        for (int x = 0; x < Cols; x++)
        {
            
            Array[y][x] =  i ;
            i++;

            
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






int main()
{

    int Array[3][3];

    FillMatrixWithOrderedNumbers(Array, 3, 3);

    cout << "The Following is a 3x3 Ordered Matrix : " << endl;
    PrintMatrix(Array, 3, 3);




    return 0;
}