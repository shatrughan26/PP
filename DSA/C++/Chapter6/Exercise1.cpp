//#Changing for loop with while loop
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    long euro, maxEuro;
    double rate ;

    cout << "\n* * * TABLE OF EXCHANGE " << " Euro - US * * * \n\n";
    cout << "\nPlease give the rate of exchange: " "one Euro in US : ";
    cin >> rate;
    cout << "\nPlease enter the maximum euro: ";
    cin >> maxEuro;

    cout << '\n' << setw(12) << "Euro" << setw(20) << "US" << "\t\tRate: " << rate << endl;

    cout << fixed << setprecision(2) << endl;

    long lower, upper, step;
    lower = 1, step = 1, euro = lower, upper = step *10;

    while (lower <= maxEuro)
    {
        while (euro <= upper && euro <= maxEuro)
        {
            cout << setw(12) << euro << setw(20) << euro*rate << endl;
            euro+=step;
        }
        step*= 10,lower = 2 * step;
    }
    
}
