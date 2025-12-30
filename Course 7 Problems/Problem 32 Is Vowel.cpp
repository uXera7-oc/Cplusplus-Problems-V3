#include <iostream>
#include <string>
#include <cctype>


using namespace std;



char Ask4ACahr()
{
    char Letter;
    cout << "Please Enter a Character ?" << endl;
    cin >> Letter;

    return Letter;
}

bool IsVowel(char Letter)
{
    Letter = tolower(Letter);

    return ((Letter == 'a') || (Letter == 'e') || (Letter == 'i') || (Letter == 'o') || (Letter == 'u'));

}







int main()
{
    char Letter = Ask4ACahr();
    cout << endl;

    if (IsVowel(Letter))
    {
        cout << "YES Letter " << Letter << " is Vowel" ;
    }
    else
    {
        cout << "NO Letter " << Letter << " is NOT Vowel";
    }

    


    return 0;
}