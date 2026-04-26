#include<iostream>
using namespace std;

int var, *ptr;

int main(){
    var = 100;
    ptr = &var;

    cout << "value of var:      " << var << "   Address of var: " << & var << endl;
    cout << " value of ptr:   "         << ptr << "   Adress of ptr:   " << &ptr << endl;

    return 0;
}

//Adress of var became value for ptr variable.