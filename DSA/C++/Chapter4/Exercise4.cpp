// Write a C++ program that reads any given character code (a positive integer)
// from the keyboard and displays the corresponding character and the character
// code as a decimal, an octal, and a hexadecimal on screen.

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int code;
    cout << "Enter the character code : ";
    cin >> code;

    cout << "Character: " << static_cast<char>(code) << endl;
    cout << "Decimal: " << dec << code << endl;
    cout << "octal: " << oct << code << endl;
    cout  << "Hexadecimal: " << hex << code << endl;
    
    return 0;
}


// #include <iostream>
// #include <iomanip> // Required for manipulators like hex, oct, and dec

// using namespace std;

// int main() {
//     int code;

//     cout << "Enter a character code (e.g., 65): ";
//     cin >> code;

//     cout << "\nResults for code " << code << ":" << endl;
//     cout << "---------------------------" << endl;
//     cout << "Character:   " << static_cast<char>(code) << endl;
    
//      Changing the base for the integer output
//     cout << "Decimal:     " << dec << code << endl;
//     cout << "Octal:       " << oct << code << endl;
//     cout << "Hexadecimal: " << hex << code << endl;

//     return 0;
// }