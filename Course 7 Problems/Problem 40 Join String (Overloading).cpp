#include <iostream>
#include <string>
#include <iomanip>
#include <vector>



using namespace std;


string JoinString(vector<string> vString, string Space)
{
    string S1 = "";

    for (string& s : vString)
    {
        S1 = S1 + s + Space;

    }
    return S1.substr(0, S1.length() - Space.length());//To Cut The Last Spaces

}


string JoinString(string ArrayStr[], short Length, string Space)
{
    string S1 = "";

    for (short i = 0; i < Length; i++)
    {
        S1 += ArrayStr[i] + Space;
    }
    return S1.substr(0,S1.length() - Space.length());
    
}



int main()
{
    vector <string> vString = { "Mohammed","Fadi","Ali","Maher" };

    string Array[] = { "Mohammed","Fadi","Ali","Maher" };
  
    cout << "Vector After Join : " << endl;

    cout << JoinString(vString, " ");
    cout << endl << endl;
    
    cout << "Array After Join : " << endl;
    cout << JoinString(Array,4, " ");
    cout << endl << endl;


    return 0;
}