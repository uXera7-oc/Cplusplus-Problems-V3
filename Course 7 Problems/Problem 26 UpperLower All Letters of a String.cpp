#include <iostream>
#include <string>
#include <cctype>


using namespace std;

string ReadingString()
{
    string Message;

    cout << "Please Enter Your String ?" << endl;
    getline(cin, Message);
    cout << endl;

    return Message;

}


void PrintUpperLettersOfaString(string Message)
{

    for (short i = 0; i < Message.length(); i++)
    {
            Message[i] = toupper(Message[i]);
        
    }
    cout << "String After Upper : " << endl;
    cout << Message << endl;
}

void PrintLowerLettersOfaString(string Message)
{

    for (short i = 0; i < Message.length(); i++)
    {
            Message[i] = tolower(Message[i]);
        
    }
    cout << "String After Lower : " << endl;
    cout << Message << endl;
}





int main()
{
    string Message = ReadingString();

    PrintUpperLettersOfaString(Message);
    cout << endl;
    PrintLowerLettersOfaString(Message);




    return 0;
}