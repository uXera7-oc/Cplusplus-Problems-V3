#include <iostream>
#include <string>
#include <cctype>


using namespace std;



string ReplaceWordInStringUsingBuiltInFunction(string S1, string StringToReplace, string sReplace)
{
    short pos = S1.find(StringToReplace);

    while (pos != std::string::npos)
    {
        S1 = S1.replace(pos, StringToReplace.length(), sReplace);
        pos = S1.find(StringToReplace);//To Find The Next One
    }

    return S1;


}




int main()
{
    string S1 = "Welcome To Jordan , Jordan is a good country !";
    string StringToReplace = "Jordan";
    string ReplaceTo = "USA";

    cout << "\nOriginal String :\n" << S1 << endl;
    cout << "\nString After Replace:\n";
    cout << ReplaceWordInStringUsingBuiltInFunction(S1, StringToReplace, ReplaceTo);
    cout << endl << endl;

    

    




    return 0;
}