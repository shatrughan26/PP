#include <iostream>
#include <cctype>
using namespace std;
int main(){
    char c;
    long nChar = 0 , nConv = 0;
    while ( cin.get(c))
    {
        ++nChar;
        if ( islower(c))
        {
            c = toupper(c);
            ++nConv;
        }
        cout.put(c);
        

    }
    clog << "\nTotal of character:      " << nChar << "\nTotal of converted character:  " << nConv << endl;
    
    return 0;
}