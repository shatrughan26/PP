#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int main(){
    int Num, Peices,Money;

    cout << "Enter the Article Number : ";
    cin >> Num;
    cout << "Enter the Peices : ";
    cin >> Peices;
    cout << "Enter the Money : ";
    cin >> Money;

    cout << "Article Number" << "\t\tNumber of Piece" << "\t\tPrice Per Piece"<< endl;

    cout << "\n" <<setw(8) << Num << setw(16) << Peices << fixed << setprecision(2) << setw(16) << Money << " Dollar " << endl;

    return 0;
}
