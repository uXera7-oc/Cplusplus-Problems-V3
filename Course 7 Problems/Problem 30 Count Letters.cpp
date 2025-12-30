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

char Ask4ACahr()
{
    char X;
    cout << "Please Enter a Character ?" << endl;
    cin >> X;

    return X;
}

short CountLetters(string Message, char X)
{
    short Counter = 0;

    for (short i = 0; i <Message.length(); i++)
    {
        if (Message[i] == X)
        {
            Counter++;
        }
    }
    return Counter;
}







int main()
{

    string Message = ReadingString();
    cout << endl;

    char X = Ask4ACahr();


    cout << "Letter '" << X << "' Count = " << CountLetters(Message, X) << endl;


    

    return 0;
}