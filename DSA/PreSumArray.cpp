#include <iostream>
using namespace std;

int main()
{
    int Arr[5] = {1,2,3,4,5}, res[5];
    
    for (int i = 1; i < 5; i++)
    {
        res[0] = Arr[0];
        for (int j = i + 1; i <= 5; i++)
        {
            int sum = Arr[i] + Arr[j];
            res[i] = sum;
            break;
            
        }
        for (int i = 0; i < 5; i++)
        {
            cout << "the result array : " << res[i];
        }
        
        
    }
    
    
    
    return 0;
}
