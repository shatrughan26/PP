#include <iostream>
using namespace std;

const double pi = 3.141592653589793;
int main(){
    double area, circuit, radius = 1.5;

    area = pi * radius * radius;
    circuit = 2 * pi * radius;

    cout << "Radius:        " << radius << endl;
    cout << "Circumferance  " << circuit <<endl;
    cout << "Area   " << area << endl;

    return 0;
}