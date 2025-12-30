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


void StringLength(string Message)
{
    int Counter = 0;
    for (short i = 0; i < Message.length(); i++)
    {

        if (Message[i] != ' ')
        {
            Counter++;
        }
    }
    cout << "String Length = " << Counter << endl;

    
}

void CapitalLettersCounter(string Message)
{
    int Counter = 0;
    for (short i = 0; i < Message.length(); i++)
    {
        if (isupper(Message[i]))
        {
            Counter++;
        }
    }
    cout << "Capital Letters Count = " << Counter << endl;
}

void SmallLettersCounter(string Message)
{
    int Counter = 0;
    for (short i = 0; i < Message.length(); i++)
    {
        if (islower(Message[i]))
        {
            Counter++;
        }
    }
    cout << "Small Letters Count = " << Counter << endl;
}




int main()
{

    string Message = ReadingString();


    //if U Want the full Length U can replace this function with this line of code:
    //cout << "String Length = << Message.Length() << endl;
    StringLength(Message);

    CapitalLettersCounter(Message);
    SmallLettersCounter(Message);





    return 0;
}