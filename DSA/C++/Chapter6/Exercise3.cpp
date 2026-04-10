#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main(){
    unsigned int num;
    cout << "Enter an Integer from (0 to 665535)";
    cin >> num;
    srand(num);
    if(num < 0 && num > 665535){
        cout << "Please Enter a number which is between from 0 to 665535";
    }
    else{
        for (int i = 1; i < 21; i++)
        {
            cout << setw(20) << i << ". random number = " << setw(3) << (rand() % 100 + 1) << endl;  
        }
        
    }
    return 0;
}