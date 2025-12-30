#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <fstream>
#include <iomanip>


using namespace std;

const string FileName = "ClientsRecords.txt";


struct stClientData
{
    string PinCode;
    string AccountNumber;
    string Name;
    string Phone;
    float AccountBalance;


};

string Ask4AccountNumber()
{
    string AccountNumber; 

    cout << "Please Enter Account Number " << endl;
    getline(cin, AccountNumber);

    return AccountNumber;
}

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


stClientData ConvertLineToRecord(string Line , string Delim = "#//#")
{
    stClientData ClientData;
    vector <string> vClientData;

    vClientData = SplitString(Line, Delim);


    if (vClientData.size() >= 5)
    {
        ClientData.AccountNumber = vClientData[0];
        ClientData.PinCode = vClientData[1];
        ClientData.Name = vClientData[2];
        ClientData.Phone = vClientData[3];
        ClientData.AccountBalance = stof(vClientData[4]);
    }

    return ClientData;

}

vector<stClientData> LoadClientDataFromFile(string FileName)
{
    vector <stClientData> vClients;

    fstream ClientsRecords;

    ClientsRecords.open(FileName, ios::in);

    if (ClientsRecords.is_open())
    {
        string Line;
        stClientData Client;

        while (getline(ClientsRecords, Line))
        {
            Client = ConvertLineToRecord(Line);

            vClients.push_back(Client);
        }
        ClientsRecords.close();
    }

    return vClients;


}


void PrintClientData(stClientData ClientData)
{
    cout << "Account Number : " << ClientData.AccountNumber << endl;
    cout << "Pin Code       : " << ClientData.PinCode << endl;
    cout << "Name           : " << ClientData.Name << endl;
    cout << "Phone          : " << ClientData.Phone << endl;
    cout << "Account Balance : " << ClientData.AccountBalance << endl;
}



void DeleteRecordFromFile(string AccountNumber)
{

    vector <stClientData> vClient = LoadClientDataFromFile(FileName);

    bool Found = false;
    stClientData Client;

    for (stClientData& C : vClient)
    {
        if (C.AccountNumber == AccountNumber)
        {
            Client = C;
            Found = true;
            break;
        }
    }
    if (!Found)
    {
        cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found!\n";
        return;

    }

    PrintClientData(Client);

    char Answer;

    cout << "\nAre you sure you want to delete this client? (y/n): ";
    cin >> Answer;

    if (Answer == 'Y' || Answer == 'y')
    {


      fstream ClientsRecords;

       ClientsRecords.open(FileName, ios::out);

        if (ClientsRecords.is_open())
        {

            for (stClientData& Client : vClient)
            { 
                 //U can not Delete a line directly
                 if (Client.AccountNumber != AccountNumber)
                 {
               ClientsRecords << Client.AccountNumber << "#//#" << Client.PinCode << "#//#" << Client.Name << "#//#" << Client.Phone << "#//#" << Client.AccountBalance << endl;

                 }
             }
             ClientsRecords.close();


         }

        cout << "\n\nClient Deleted Successfully !\n";
    }
    else
    {
        cout << "\nDeletion Cancelled\n";
    }
}



int main()
{
   
    
    
    string AccountNumber = Ask4AccountNumber();

    DeleteRecordFromFile(AccountNumber);

    return 0;
}
