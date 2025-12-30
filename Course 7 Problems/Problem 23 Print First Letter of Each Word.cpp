#include <iostream>
#include <string>


using namespace std;

string ReadingString()
{
    string Message;

    cout << "Please Enter Your String ?" << endl;
    getline(cin, Message);

    return Message;

}

void PrintFirstLetterOfEachWordInString(string Message)
{
    bool IsFirstLetter = true;

    cout << "First Letters of this String : " << endl;

    for (short i = 0; i < Message.length(); i++)
    {
        if (Message[i] != ' ' && IsFirstLetter)
        {
            cout << Message[i] << endl;
        }
        //To Check if We are in the beginning of a new word
        IsFirstLetter = (Message[i] == ' ' ? true : false);
    }
}






int main()
{
   string Message = ReadingString();

   PrintFirstLetterOfEachWordInString(Message);
    



    return 0;
}