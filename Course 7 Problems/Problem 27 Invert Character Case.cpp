#include <iostream>
#include <string>
#include <cctype>


using namespace std;

char ReadingCharacter()
{
    char x;

    cout << "Please Enter a Character ?" << endl;
    cin >> x;
    cout << endl;

    return x;
}

void CharacterInverter(char x)
{
    if (isupper(x))
    {
        x = tolower(x);
        cout << "Char After Inverting Case : "  <<  endl;
        cout << x;
    }
    else
    {
        x = toupper(x);
        cout << "Char After Inverting Case : " << endl;
        cout << x;
    }

}

//Perfect Way

//char InvertLetterCase(char x)
//{
//    return isupper(x) ? tolower(x) : toupper(x);
//}



int main()
{
    char Character = ReadingCharacter();

    CharacterInverter(Character);





    return 0;
}