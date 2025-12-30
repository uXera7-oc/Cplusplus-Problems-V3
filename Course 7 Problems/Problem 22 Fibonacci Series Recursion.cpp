#include <iostream>


using namespace std;



void FibonacciSeriesUsingRecursion(short Number,int Prev1,int Prev2)
{
    int FebNumber = 0;

    if (Number > 0)
    {
        FebNumber = Prev1 + Prev2;
        Prev2 = Prev1;
        Prev1 = FebNumber;
        cout << FebNumber << "      ";
        FibonacciSeriesUsingRecursion(Number - 1,Prev1,Prev2);
    }
}




int main()
{
   
    FibonacciSeriesUsingRecursion(10, 0,1);



    return 0;
}