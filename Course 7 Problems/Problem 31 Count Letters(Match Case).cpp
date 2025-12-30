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
    char Letter;
    cout << "Please Enter a Character ?" << endl;
    cin >> Letter;

    return Letter;
}

short CountLetters(string Message, char Letter)
{
    short Counter = 0;

    for (short i = 0; i <Message.length(); i++)
    {
        if (Message[i] == Letter)
        {
            Counter++;
        }
    }
    return Counter;
}


char InvertLetterCase(char Letter)
{
    return isupper(Letter) ? tolower(Letter) : toupper(Letter);
}



short CountLettersInvertCase(string Message, char Letter)
{
    short Counter = 0;
    char Inverted = InvertLetterCase(Letter);

    for (short i = 0; i < Message.length(); i++)
    {
        if (Message[i] == Inverted)
            Counter++;
    }
    return Counter;
}

short CountLettersAllCases(string Message, char Letter)
{
    return CountLetters(Message, Letter) + CountLettersInvertCase(Message, Letter);
}





int main()
{

    string Message = ReadingString();
    cout << endl;

    char Letter = Ask4ACahr();


    cout << "Letter '" << Letter << "' Count = " << CountLetters(Message, Letter) << endl;
    cout << "Letter '" << Letter << "' Or '" << InvertLetterCase(Letter) << "' Count =  " << CountLettersAllCases(Message, Letter) << endl;



    return 0;
}