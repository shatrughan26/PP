// pallindrome.cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string prompt = "     Pallindrome Code", dashes(30, '-');
    string pallindrome;
    cout << prompt << endl
         << dashes << endl;
    cin >> pallindrome;
    int i = 0, j = pallindrome.length() - 1;
    for (; i <= j; ++i, --j)
    {
        if (pallindrome[i] != pallindrome[j])
            break;
    }
    if (i > j)
        cout << "\nThe word " << pallindrome << " is a PALINDROME!" << endl;
    else
    {
        cout << "\nThe word " << pallindrome << " is not a palindrome" << endl;
    }

    return 0;
}