#include <iostream>
#include <string>
#include <cctype>
#include <vector>


using namespace std;





string ReplaceWordInStringUsingSplits(string S1,string StringToReplace,string sReplace)
{
    short pos = S1.find(StringToReplace);

    while (pos != std::string::npos)
    {
        string S1Before = S1.substr(0, pos);
        string S1After = S1.substr(pos + StringToReplace.length());

        S1 = S1Before + sReplace + S1After;

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
    cout << ReplaceWordInStringUsingSplits(S1, StringToReplace, ReplaceTo);
    cout << endl << endl;

    

    




    return 0;
}

//=========================================================================

//The Perfect Solution

#include <iostream>
#include <string>
#include <cctype>
#include <vector>


using namespace std;


vector <string> SplitString(string S1, string Space)
{
    vector <string> vString;
    short pos = 0;
    string sWord;


    while ((pos = S1.find(Space)) != std::string::npos)
    {
        sWord = S1.substr(0, pos); //Store the Word
        if (sWord != " ")
        {
            vString.push_back(sWord);
        }
        S1.erase(0, pos + Space.length());//Erasing until position and move to the next word

    }

    if (S1 != " ")
    {
        vString.push_back(S1);
    }



    return  vString;
}



string JoinString(vector<string> vString, string Space)
{
    string S1 = "";

    for (string& s : vString)
    {
        S1 = S1 + s + Space;

    }
    return S1.substr(0, S1.length() - Space.length());//To Cut The Last Spaces

}

string LowerAllString(string S1)
{
    for (short i = 0; i < S1.length(); i++)
    {
        S1[i] = tolower(S1[i]);
    }
    return S1;
}



string ReplaceWordInStringUsingSplits(string S1, string StringToReplace, string sReplaceTo, bool MatchCase = true)
{
    vector<string> vString = SplitString(S1, " ");

    for (string& s : vString)
    {
        if (MatchCase)
        {
            if (s == StringToReplace)
            {
                s = sReplaceTo;
            }
        }
        else
        {
            if (LowerAllString(s) == LowerAllString(StringToReplace))
            {
                s = sReplaceTo;
            }
        }
    }

    return JoinString(vString, " ");




}




int main()
{
    string S1 = "Welcome To Jordan , Jordan is a good country !";
    string StringToReplace = "jordan";
    string ReplaceTo = "USA";

    cout << "\nOriginal String :\n" << S1 << endl;

    cout << "\nReplace With match case :";
    cout << "\n" << ReplaceWordInStringUsingSplits(S1, StringToReplace, ReplaceTo);
    cout << endl << endl;

    cout << "\nReplace With don't match case :";
    cout << "\n" << ReplaceWordInStringUsingSplits(S1, StringToReplace, ReplaceTo, false);
    cout << endl << endl;








    return 0;
}

