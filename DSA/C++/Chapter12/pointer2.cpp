#include<iostream>
using namespace std;

void swap (float *,float *);

int main(){
    float x = 11.1F;
    float y = 22.2F;

    swap(&x, &y); //address assigned

    cout << "x value is : " << x << "  " << "y value is : " <<  y << endl;
} 
void swap(float *p1, float *p2){
    float temp;
    temp = *p1; // value access, value is going into the temp
    *p1 = *p2;
    *p2 = temp;
}