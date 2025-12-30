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

void PrintUpperFirstLetterOfEachWordInString(string Message)
{
    bool IsFirstLetter = true;


    for (short i = 0; i < Message.length(); i++)
    {
        if (Message[i] != ' ' && IsFirstLetter)
        {
            Message[i] = toupper(Message[i]);

        }
        //To Check if We are in the beginning of a new word
        IsFirstLetter = (Message[i] == ' ' ? true : false);
    }
    cout << "String after conversion : " << endl;
    cout << Message << endl;
}






int main()
{
    string Message = ReadingString();

    PrintUpperFirstLetterOfEachWordInString(Message);




    return 0;
}