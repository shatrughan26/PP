// Evaluating operands in logical expressions.

#include <iostream>
using namespace std;

int main(){
    cout << boolalpha;

    bool res = false;

    int y = 5;
    res = 7 || (y = 0);
    cout << "Result of (7 || (y = 0 )): " << res << endl;
    cout << "Value of y : " << y << endl;

    int a, b, c;

    a = b = c = 0;

    res = ++a || ++b && ++c;
    cout  << " res = " << res << " , a = " << a << " , b = " << b << " , c = " << c << endl;

    return 0;
}