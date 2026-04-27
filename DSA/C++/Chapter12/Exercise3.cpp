#include<iostream>
using namespace std;

void swapByPointer( float*, float*);
void swapByReference( float&, float&);

int main(){
    float x = 11.1F;
    float y = 22.2F;

    cout << "x and y before swapping:   " << x << "     " << y << endl;

    swapByPointer(&x,&y);
    cout << "x and y after 1. swapping: " << x << "     " << y << endl;

    swapByReference(x,y);
    cout << "x and y after 2. swapping: " << x << "    " << y << endl;

    return 0;
}

void swapByPointer(float *p1, float *p2){
    float temp;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void swapByReference(float &r1, float &r2){
    float temp;

    temp = r1;
    r1 = r2;
    r2 = temp;
}