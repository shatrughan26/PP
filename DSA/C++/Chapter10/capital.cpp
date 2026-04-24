#include <iostream>
#include <math.h>
using namespace std;
double capital (double k0, double p, double n){
    return (k0 * pow(1.0+p/100, n));
}