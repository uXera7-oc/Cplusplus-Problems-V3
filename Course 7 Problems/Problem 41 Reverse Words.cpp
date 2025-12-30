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

 

   

    return  vString;
}



  
 
void ReversedString(string S1)
{
    vector <string> vReversed = SplitString(S1," ");

    cout << "Reversed String : " << endl; 

    for (short i = vReversed.size() - 1; i >= 0; i--)
    {
        cout << vReversed[i] << " ";

    }

}






int main()
{


    string S1 = ReadingString();

    cout << endl;
    ReversedString(S1);




    return 0;
}

