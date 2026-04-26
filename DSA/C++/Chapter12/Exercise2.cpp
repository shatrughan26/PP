//Area and circumferance of  the circle
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

void circle(const double& r, double& um, double& f1);

const double startRadius = 0.5, endRadius = 10.0, step = 0.5;

string header = "\n         ****** Computing Circles ****** \n",line ( 50, '-');

int main(){
    
    double rad, circuit, plane;

    cout << header << endl;
    cout << setw(10) << "Radius" << setw(20) << "Circumference" << setw(20) << "Area\n" << line << endl;

    cout << fixed;

    for (rad = startRadius; rad < endRadius + step/2; rad += step)
    {
        circle(rad, circuit, plane);
        cout << setprecision(1) << setw(8) << rad << setprecision(5) << setw(22) << circuit << setw(20) << plane << endl; 
    }

    return 0;
}

void circle (const double& r, double& u, double &f){
    const double pi = 3.1415926536;
    u = 2 * pi * r;
    f = pi * r * r;
}