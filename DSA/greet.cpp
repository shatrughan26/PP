#include <iostream>
#include <string>
using namespace std;


void greet2(string name);
void bye();
void greet(string name){
    cout << "hello, " << name << "!" << endl;
    greet2(name);
    cout << "Getting ready to say bye...";
    bye();
}

void greet2(string name){
    cout << "how are you " << name << " ?" << endl;;
}

void bye(){
    cout << "ok bye!";
}

int main(){
    string name = "Deepak";
    greet(name);
    return 0;
}