#include <iostream>
#include <math.h>
using namespace std;

double pow(double base, int exp);

int main()
{
    double base;
    int exp;

    cout << "Enter the base and the exp : " << endl;
    cin >> base >> exp;
    cout << "power of the " << base << " with power " << exp << " = " << pow(base, exp);
}

double pow(double base, int exp)
{
    if (exp == 0)
        if (base == 0.0)
            if (exp > 0)
                return 0.0;
            else
                return HUGE_VAL;
    if (exp < 0)
    {
        base = 1.0 / base;
        exp = -exp;
    }
    double power = 1.0;
    for (int n = 1; n <= exp; ++n)
    {
        power *= base;
    }
    return power;
}