#include <iostream>
using namespace std;

void countdown(int i){
    cout << i;
    if(i <= 1){
        return;
    }
    else
        countdown(i-1);
}

int main(){
    countdown(3);
    return 0;
}