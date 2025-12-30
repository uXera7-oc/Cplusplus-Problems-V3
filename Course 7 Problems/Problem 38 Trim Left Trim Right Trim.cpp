#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>



using namespace std;



string ReadingString()
{
    string S1;

    cout << "Please Enter Your String ?" << endl;
    getline(cin, S1);

    return S1;

}


string TrimLeft(string S1)
{

    while (!S1.empty() && S1[0] == ' ')
    {
        S1.erase(0, 1);
    
    }

    return S1;

}

string TrimRight(string S1)
{
    while (!S1.empty() && S1.back() == ' ')
    {
        S1.pop_back();

    }

    return S1;
}

string Trim(string S1)
{
    S1 = TrimLeft(S1);
    S1 = TrimRight(S1);


    return S1;
    //OR return (TrimLeft(TrimRight(S1)));
}


int main()
{
    string S1 = ReadingString();

    cout << "String "    << setw(8) << " = " << S1 << endl;

    cout << endl;

    cout << "Trim Left " << setw(5) << " = "  << TrimLeft(S1);
    cout << endl;
    cout << "Trim Right "  << setw(4) << " = " << TrimRight(S1);
    cout << endl;
    cout << "Trim "  << setw(10) <<  " = " << Trim(S1);
    cout << endl;




    return 0;
}