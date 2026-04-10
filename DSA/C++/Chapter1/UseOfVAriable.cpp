//Definition and use of variable
#include <iostream>
using namespace std;

int gVar1;
int gVar2 = 2;
int main(){
    char ch('A'); // or char ch = 'A'
    cout << "value of gVar1:    " << gVar1 << endl;
    cout << "Value off gVar2:   " << gVar2 << endl;
    cout << "Character in ch:   " << ch << endl;

    int sum, number =3 ;
    sum = number + 5;
    cout << "value of sum:      " << sum << endl;
    
    return 0;
}