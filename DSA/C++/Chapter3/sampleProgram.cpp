#include <iostream>
#include <cstdlib> //srand rand prototype

using namespace std;
int main(){
    unsigned int seed;
    int z1, z2, z3;

    cout << "   --- Random Numbers  ---\n" << endl;
    cout << "To initialize the random number generator," << "\n please enter an integer value: ";
    cin >> seed;

    srand(seed);

    z1 = rand();
    z2 = rand();
    z3 = rand();

    cout << "\nThree random numbers: " << z1 << "   " << z2 << "    " << z3 << endl;

    return 0;
}