#include <iostream>
#include <string>
using namespace std;

bool getClient(string &name, long &nr);
void putClient(const string &name, const long &nr);

int main()
{
    string clientName;
    long clientNr;

    cout << "\nTo input and output client data \n"
         << endl;

    if (getClient(clientName, clientNr))
    {
        putClient(clientName, clientNr);
    }
    else
        cout << "Invalid input !" << endl;

    return 0;
}
bool getClient(string &name, long &nr)
{
    cout << "\nTo input client data!\nName: ";

    if (!getline(cin, name))
        return false;

    cout << "Number: ";
    if (!(cin >> nr))
        return false;

    return true;
}

void putClient(const string &name, const long &nr)
{
    cout << "\n--------Client Data-----------\n";
    cout << "Name: " << name << "\n";
    cout << "Number: " << nr << endl;
}