#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>
using namespace std;

string header = " *** Solution of Quadratic Equations ***\n",line(50, '-');

bool quadEquation( double a, double b, double c, double* x1Ptr, double*  x2Ptr);

void printQuadEquation (double a, double b, double c);

int main(){
    cout << header << endl;
    printQuadEquation( 2.0, -2.0, -1.5);
    printQuadEquation( 1.0, -6.0, 9.0);
    printQuadEquation( 2.0, 0.0, 2.0);

    return 0;
}

void printQuadEquation( double a, double b, double c){
    double x1 = 0.0, x2 = 0.0;

    cout << line << '\n' << "\nThe quadratic equation:\n\t " << a << "*x*x + " << b << "*x + " << c << " = 0" << endl;

    if( quadEquation(a, b, c, &x1, &x2)){
        cout << "has real solution:" << "\n\t x1 = " << x1 << "\n\t x2 = " << x2 << endl;
    }
    else
        cout << "has no real solution!" << endl;
    cout << "\nGo on with return. \n\n";
    cin.get();
}

bool quadEquation ( double a, double b, double c, double* x1Ptr, double* x2Ptr){
    bool return_flag = false;

    double help = b * b - 4 * a * c;
    if ( help >= 0)
    {
        help = sqrt (help);

        *x1Ptr = (-b + help) / (2 * a);
        *x2Ptr = (-b - help) / (2 * a);

        return_flag = true;
    }
    return return_flag;
    
}

