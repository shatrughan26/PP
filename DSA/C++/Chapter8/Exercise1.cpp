#include <iostream>
using namespace std;

void func( unsigned int n);

int main(){
    func(-1);
    return 0;
}

void func(unsigned int n){
    cout << n << endl;
}