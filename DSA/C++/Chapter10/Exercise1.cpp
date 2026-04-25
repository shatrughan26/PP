#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

long sum(long i, long j, long k = 0, long  l = 0);

int main()
{
    cout << "   ****Computing sum   ****\n"
         << endl;

    srand((unsigned int)time(NULL));

    long res, a = rand() / 10, b = rand() / 10, c = rand() / 10, d = rand() / 10;

    res = sum(a,b);
    cout << a << " + " << b << " = " << res << endl;

    res = sum(a,b,c);
    cout << a << " + " << b << "  + " << c << " = " << res << endl;

    res = sum(a,b,c,d);
    cout << a << " + " << b << " + " << c << " + " << d << " = " << res << endl;
 
    return 0;
}

long sum(long i, long j, long k, long l)
{
    return (i + j + k + l);
}
