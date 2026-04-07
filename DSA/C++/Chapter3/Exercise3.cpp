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
    string message = "I have learned something new again\n",
    prompt("Please input two lines of text : "),
    str1, str2,sum;
    cout << message << endl;
    cout << prompt <<endl;

    getline(cin ,str1);
    getline(cin, str2);

    sum = str1  + str2;
    cout << "Two concatenated string\t : " << sum << endl;
    cout << "length of the concatenated strign " << sum.length() << endl;
     
    return 0;
}