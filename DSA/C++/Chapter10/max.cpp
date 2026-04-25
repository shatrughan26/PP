#include <iostream>
#include <string>
using namespace std;

inline double Max(double x, double y)
{
    return (x > y ? x : y);
}
inline char Max(char x, char y)
{
    return (x < y ? y : x);
}
inline int Max(int x, int y){
    return (x > y ? x : y);
}

string header(
    "To use the overloaded functino Max().\n"),
    line(50, '-');

int main()
{
    double x1 = 0.0, x2 = 0.0;

    line += '\n';
    cout << line << header << line << endl;

    cout << "Enter two floating-point numbers:" << endl;

    if (cin >> x1 && cin >> x2)
    {
        cout << "The greater number is " << Max(x1, x2) << endl;
    }
    else
    {
        cout << "Invalid input !" << endl;
    }
    cin.sync();
    cin.clear();

    cout << line << "and one more with character!" << endl;

    cout << "Enter two character:" << endl;

    char c1, c2;
    if (cin >> c1 && cin >> c2)
    {
        cout << "the greater character is " << Max(c1, c2) << endl;
    }
    else
        cout << "Invalid input!" << endl;

    cout << "Testing with int arguments." << endl;
    int a = 30, b = 50;
    cout << Max(a, b) << endl;

    return 0;
}