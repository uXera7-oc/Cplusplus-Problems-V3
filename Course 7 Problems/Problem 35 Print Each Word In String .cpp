//Not The Perfect Solution

#include <iostream>
#include <string>
#include <cctype>


using namespace std;



string ReadingString()
{
    string S1;

    cout << "Please Enter Your String ?" << endl;
    getline(cin, S1);

    return S1;

}

void PrintEachWordInString(string S1)
{

    cout << "Your String Words Are : " << endl;

    for (short i = 0; i < S1.length(); i++)
    {
        cout << S1[i];
        if (S1[i] != ' ')
        {
            continue;
        }
        cout << endl;
        cout << S1[i];
        
    }
}






int main()
{
    string S1 = ReadingString();
   
    cout << endl;

    PrintEachWordInString(S1);



    
    return 0;
}

======================================================================
//The Perfect Solution 

#include <iostream>
#include <string>
#include <cctype>


using namespace std;



string ReadingString()
{
    string S1;

    cout << "Please Enter Your String ?" << endl;
    getline(cin, S1);

    return S1;

}

void PrintEachWordInString(string S1)
{
    string Space = " ";
    short pos = 0;
    string sWord;

    cout << "Your String Words Are : " << endl;

    //Using find() function to get the position of Space
    while ((pos = S1.find(Space)) != std::string::npos)
    {
        sWord = S1.substr(0, pos); //Store the Word
        if (sWord != " ")
        {
            cout << sWord << endl;
        }
        S1.erase(0, pos + Space.length());//Erasing until position and move to the next word

    }

    if (S1 != " ")
    {
        cout << S1 << endl; //Printing the last word of the string
    }


}



int main()
{
    string S1 = ReadingString();
   
    cout << endl;

    PrintEachWordInString(S1);



   
    return 0;
}

