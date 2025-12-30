#include <iostream>
#include <string>
#include <cctype>




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

    cout << "Please Enter Client Data\n\n";


    cout << "Enter Account Number ?\n";
    getline( cin ,ClientData.AccountNumber);
 

    cout << "Enter PIN Code ?\n";
    getline( cin ,ClientData.PinCode);
    

    cout << "Enter Name ?\n";
    getline(cin, ClientData.Name);
    

    cout << "Enter Phone ?\n";
    getline(cin, ClientData.Phone);
   

    cout << "Enter Account Balance ?\n";
    cin >> ClientData.AccountBalance;

    return ClientData;



}



//string ConvertToLine(stClientData ClientData, string Delim = "#//#")
//{
//    return ClientData.AccountNumber + Delim + ClientData.PinCode + Delim + ClientData.Name + Delim + ClientData.Phone + Delim + to_string(ClientData.AccountBalance);
//
//}

//you can use One of This two functions :)

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



int main()
{
    stClientData ClientData = ReadClientData();

    cout << "\n\nClient Record for Saving is : \n";

    cout << Convert2Line(ClientData);
    




    return 0;
}
