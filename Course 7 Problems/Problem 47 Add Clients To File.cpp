#include <iostream>
#include <string>
#include <cctype>
#include <fstream>




using namespace std;


struct stClientData
{
    string PinCode;
    string AccountNumber;
    string Name;
    string Phone;
    float AccountBalance;
};


stClientData ReadClientData()
{
    stClientData ClientData;


    cout << "Enter Account Number ?";
    //ws Will Extract All The Whitespaces Character
    getline(cin >> ws, ClientData.AccountNumber);


    cout << "Enter PIN Code ?";
    getline(cin, ClientData.PinCode);


    cout << "Enter Name ?";
    getline(cin, ClientData.Name);


    cout << "Enter Phone ?";
    getline(cin, ClientData.Phone);


    cout << "Enter Account Balance ?";
    cin >> ClientData.AccountBalance;

    return ClientData;



}


string Convert2Line(stClientData ClientData, string Delim = "#//#")
{
    string ClientRecord = "";

    ClientRecord += ClientData.AccountNumber + Delim;
    ClientRecord += ClientData.PinCode + Delim;
    ClientRecord += ClientData.Name + Delim;
    ClientRecord += ClientData.Phone + Delim;
    ClientRecord += to_string(ClientData.AccountBalance);

    return ClientRecord;
}

void SavingClientReccord(string ClientRecord)
{
    fstream ClientsRecordsFile;

    ClientsRecordsFile.open("ClientsRecords.txt", ios::out | ios::app);

    if (ClientsRecordsFile.is_open())
    {
        ClientsRecordsFile << ClientRecord << endl;

        ClientsRecordsFile.close();
    }

}

void AddNewClient()
{
    stClientData ClientData;

    ClientData = ReadClientData();

    SavingClientReccord(Convert2Line(ClientData, "#//#"));

}

void Asking4Clients()
{
    char Answer;

    do
    {
        system("cls");
        cout << "\nAdding New Client : \n\n";
        AddNewClient();

        cout << "\n\nClient Add Successfully , do You Want to Add More ? [Y/N]\n";
        cin >> Answer;

    } while (Answer == 'Y' || Answer == 'y');
}



int main()
{
   
    Asking4Clients();


    //To Check do this Steps:
    //1 Open Solution Explorer
    //2 Right Click on The Name of The Project
    //3 Click on "Open Folder in File Explorer"
    //4 Check The Name of The Created File :)




    return 0;
}
