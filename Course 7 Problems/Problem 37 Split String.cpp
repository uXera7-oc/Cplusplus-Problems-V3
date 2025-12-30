#include <iostream>
#include <string>
#include <cctype>
#include <vector>



using namespace std;



string ReadingString()
{
    string S1;

    cout << "Please Enter Your String ?" << endl;
    getline(cin, S1);

    return S1;

}


vector <string> SplitString(string S1, string Space)
{
    vector <string> vString;
    short pos = 0;
    string sWord;
    short Counter = 0;


    while ((pos = S1.find(Space)) != std::string::npos)
    {
        sWord = S1.substr(0, pos); //Store the Word
        if (sWord != " ")
        {
            vString.push_back(sWord);
            Counter++;
        }
        S1.erase(0, pos + Space.length());//Erasing until position and move to the next word

    }

    if (S1 != " ")
    {
        vString.push_back(S1);
        Counter++;

    }

    cout << "Tokens = " << Counter << endl;

    for (string& Words : vString)
    {
        cout << Words << endl;
    }


    return  vString ;
}




int main()
{
    string S1 = ReadingString();

    cout << endl;

    SplitString(S1, " ");



    return 0;
}

===================================================================================
//Perfect Solution 

#include <iostream>
#include <string>
#include <cctype>
#include <vector>



using namespace std;



string ReadingString()
{
    string S1;

    cout << "Please Enter Your String ?" << endl;
    getline(cin, S1);

    return S1;

}


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

   

    return  vString ;
}




int main()
{
    vector <string> vString;

    vString = SplitString(ReadingString(), " ");

    cout << "Tokens = " << vString.size() << endl;

    for (string& S : vString)
    {
        cout << S << endl;
    }





    return 0;
}