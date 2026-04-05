//Write a C++ program that two defines variables for floating-point numbers and initializes them with the values//

#include <iostream>
using namespace std;

int main(){
    double Var1(123.456),Var2(76.543);
    double sum = Var1 + Var2;
    double difference = Var1 - Var2;

    cout << "Sum of 2 variable : " << sum << "\nDiffernce of 2 variable : " << difference << endl;

    return 0;
}