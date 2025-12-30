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

void CountEachWordInString(string S1)
{
    string Space = " ";
    short pos = 0;
    string sWord;
    short Counter = 0;


    //Using find() function to get the position of Space
    while ((pos = S1.find(Space)) != std::string::npos)
    {
        sWord = S1.substr(0, pos); //Store the Word
        if (sWord != " ")
        {
            Counter++;
        }
        S1.erase(0, pos + Space.length());//Erasing until position and move to the next word

    }

    if (S1 != " ")
    {
        Counter++;
    }
    
    cout << "The Number of Words in your String is : "  << Counter << endl;


}



int main()
{
    string S1 = ReadingString();
   
    cout << endl;

    CountEachWordInString(S1);



    





    return 0;
}