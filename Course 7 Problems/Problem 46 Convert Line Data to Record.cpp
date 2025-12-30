#include <iostream>
#include <string>
#include <cctype>
#include <vector>




using namespace std;


struct stClientData
{
    string PinCode;
    string AccountNumber;
    string Name;
    string Phone;
    float AccountBalance;


};


vector <string> SplitString(string S1, string Delim)
{
    vector <string> vString;
    short pos = 0;
    string sWord;


    while ((pos = S1.find(Delim)) != std::string::npos)
    {
        sWord = S1.substr(0, pos); //Store the Word
        if (sWord != Delim)
        {
            vString.push_back(sWord);
        }
        S1.erase(0, pos + Delim.length());//Erasing until position and move to the next word

    }

    if (S1 != Delim)
    {
        vString.push_back(S1);
    }



    return  vString;
}



stClientData FillClientData(vector<string> vString)
{
    stClientData ClientData;


    if (vString.size() >= 5)
    {
        ClientData.AccountNumber = vString[0];
        ClientData.PinCode = vString[1];
        ClientData.Name = vString[2];
        ClientData.Phone = vString[3];
        ClientData.AccountBalance = stof(vString[4]);
    }

    return ClientData;

}

void PrintClientData(stClientData CLientData)
{
    cout << "Account Number : " << CLientData.AccountNumber << endl;
    cout << "Pin Code       : " << CLientData.PinCode << endl;
    cout << "Name           : " << CLientData.Name << endl;
    cout << "Phone          : " << CLientData.Phone << endl;
    cout << "Account Balance : " << CLientData.AccountBalance << endl;
}






int main()
{
    vector<string> vString;
    string Delim = "#//#";
    stClientData ClientData;


    string LRecord = "A150#//#1234#//#Mohammed Abu-Hadhoud#//#0808080#//#8000";

    cout << "Line Record is :\n";
    cout << LRecord << endl << endl;

    cout << "\nThe Following is extracted client record :\n\n";
    vString = SplitString(LRecord, Delim);
    ClientData = FillClientData(vString);

    PrintClientData(ClientData);


    
    




    return 0;
}
