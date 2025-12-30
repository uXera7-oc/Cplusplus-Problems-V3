#include <iostream>
#include <ctime>
#include <iomanip>


using namespace std;

int RandomNumbers(int From, int To)
{
    int Random = rand() % (To - From + 1) + From;
    return Random;

}

int Matrix3x3(int Array[3][3])
{
    //Array [Row : y] [Column : x]

    for (int y = 0; y < 3; y++) //Y-axis
    {
        for (int x = 0; x < 3; x++) //X-axis
        {
            Array[y][x] = RandomNumbers(1, 100);
        }
    }

    return Array[3][3];

}

void PrintResult()
{
    int Array[3][3];
    Matrix3x3(Array);

    cout << "The Following is a 3x3 Random Matrix : " << endl;

     //Revision of  2D Array's lesson
    cout << Array[0][0] << setw(8) << Array[0][1] << setw(8) << Array[0][2] << endl;
    cout << Array[1][0] << setw(8) << Array[1][1] << setw(8) << Array[1][2] << endl;
    cout << Array[2][0] << setw(8) << Array[2][1] << setw(8) << Array[2][2] << endl;

}






int main()
{
    //Seeds the random number generator in C++ , Called only once !
    srand((unsigned)time(NULL));

    int Array[3][3];

    PrintResult();
    



    return 0;
}  

============================================================================
//With For Loop 

#include <iostream>
#include <ctime>
#include <iomanip>


using namespace std;

int RandomNumbers(int From, int To)
{
    int Random = rand() % (To - From + 1) + From;
    return Random;

}

int Matrix3x3(int Array[3][3])
{
    //Array [Row : y] [Colum : x]

    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            Array[y][x] = RandomNumbers(1, 100);
        }
    }

    return Array[3][3];

}

void PrintResult()
{
    int Array[3][3];
    Matrix3x3(Array);

    cout << "The Following is a 3x3 Random Matrix : " << endl;

    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            cout << setw(8) << Array[y][x];
        }
        cout << endl;
    }
}






int main()
{
    //Seeds the random number generator in C++ , Called only once !
    srand((unsigned)time(NULL));

    int Array[3][3];

    PrintResult();
    



    return 0;
}

==================================================================================================
//Perfect Solution

#include <iostream>
#include <ctime>
#include <iomanip>


using namespace std;

int RandomNumbers(int From, int To)
{
    int Random = rand() % (To - From + 1) + From;
    return Random;

}

void FillMatrixWithRandomNumbers(int Array[3][3],short Rows , short Cols)
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






int main()
{
    //Seeds the random number generator in C++ , Called only once !
    srand((unsigned)time(NULL));

    int Array[3][3];

    FillMatrixWithRandomNumbers(Array, 3, 3);

    cout << "The Following is a 3x3 Random Matrix : " << endl;
    PrintMatrix(Array,3,3);
    



    return 0;
}


