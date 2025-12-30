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



int main()
{
    vector <string> vString = { "Mhammed","Fadi","Ali","Maher" };
  
    cout << "Vector After Join : " << endl;

    cout << JoinString(vString, " ");
    


    return 0;
}