// Create a C++ program that defines a string containing the following character
// sequence:
// I have learned something new again!
// and displays the length of the string on screen.
// Read two lines of text from the keyboard. Concatenate the strings using " * "
// to separate the two parts of the string. Output the new string on screen.

#include<iostream>
#include <string>
using namespace std;

int main(){
    string message = "I have learned something new again";
    cout << message << endl << "Length of the string\t" << message.length() << endl;
     
    return 0;
}