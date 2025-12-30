#include <iostream>
#include <string>
#include <cctype>


using namespace std;

string ReadingString()
{
    string Message;

    cout << "Please Enter Your String ?" << endl;
    getline(cin, Message);

    return Message;

}

void AllLettersInverter(string Message)
{
    for (int i = 0; i < Message.length(); i++)
    {

         if (isupper(Message[i]))
         {
            Message[i] = tolower(Message[i]);
         }
         else
         {
            Message[i] = toupper(Message[i]);
         }
    }

    cout << "String After Inverting All Letter Case :" << endl;
    cout << Message << endl;

}


int main()
{

    string Message = ReadingString();

    AllLettersInverter(Message);





    return 0;
}

===================================================================
//Perfect Solution With Reusability

#include <iostream>
#include <string>
#include <cctype>


using namespace std;

string ReadingString()
{
    string Message;

    cout << "Please Enter Your String ?" << endl;
    getline(cin, Message);

    return Message;

}


char InvertLetterCase(char x)
{
    return isupper(x) ? tolower(x) : toupper(x);
}

void AllLettersInverter(string Message)
{
    for (short i = 0; i < Message.length(); i++)
    {

        Message[i] = InvertLetterCase(Message[i]);
    }

    cout << "String After Inverting All Letter Case :" << endl;
    cout << Message << endl;

}


int main()
{

    string Message = ReadingString();

    AllLettersInverter(Message);





    return 0;
}