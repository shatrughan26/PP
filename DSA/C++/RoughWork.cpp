#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));

    int random_num = rand() % 100 + 1;
    for (int i = 0; i < 20; i++)
    {
        cout << "Random value: ";
        cout << random_num << endl;
    }
    
    

    return 0;
    
}