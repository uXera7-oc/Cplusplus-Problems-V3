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

bool IsVowel(char Letter)
{
    Letter = tolower(Letter);

    return ((Letter == 'a') || (Letter == 'e') || (Letter == 'i') || (Letter == 'o') || (Letter == 'u'));

}

short CountVowels(string S1)
{
    short Counter = 0;
    for (short i = 0; i < S1.length(); i++)
    {
        if (IsVowel (S1[i]) )
        {
            Counter++;
        }
    }
    return Counter;
}







int main()
{
    string S1 = ReadingString();
   
    cout << endl;

    cout << "Number of Vowels is : " << CountVowels(S1);


    


    return 0;
}