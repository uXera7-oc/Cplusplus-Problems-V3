#include <iostream>
#include <ctime>
#include <iomanip>


using namespace std;



void FibonacciSeriesUsingLoop(short Number)
{
    int FebNumber = 0;
    int Prev2 = 0, Prev1 = 1;
    cout << "1     ";

    for (short i = 2; i <= Number; i++)
    {
        FebNumber = Prev1 + Prev2;
        cout << FebNumber << "      ";
        Prev2 = Prev1;
        Prev1 = FebNumber;
    }
}




int main()
{
   
    FibonacciSeriesUsingLoop(10);



    return 0;
}