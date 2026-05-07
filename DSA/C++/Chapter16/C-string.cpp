#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;
char header[] = "\n     ***  C String  ***\n\n";
int main(){
    char hello[30] = "Hello " , name[20], message[80];
    
    cout << header << "Your first name: ";
    cin >> setw(20) >> name;
    strcat(hello, name);
    cout << hello << endl;
    cin.sync();
    cout << "\nWhat is the message for today?" << endl;
    cin.getline( message, 80);

    if ( strlen(message) > 0)
    {
        for (int i = 0; message[i] != '\0'; ++i)
        {
            cout << message[i] << ' ';
        }
        cout << endl;


    }
    return 0;
    
}