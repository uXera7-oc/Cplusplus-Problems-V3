#include <iostream>
#include <string>
#include <cctype>



using namespace std;


string RemovePunctuations(string S1)
{
    string S2 = "";

    for (int i = 0; i < S1.length(); i++)
    {
        if (!ispunct(S1[i]))
        {
            S2 += S1[i];
        }
    }
    return S2;

}



int main()
{
    string S1 = "Welcome To Jordan , Jordan is a good country !";


    cout << "\nOriginal String :\n" << S1 << endl;

    cout << "\nPunctuation Removed :";
    cout << "\n" << RemovePunctuations(S1);
    cout << endl << endl;








    return 0;
}
