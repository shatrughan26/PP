#include<iostream>
#include<algorithm>
using namespace std;

int Maxnum(int n, int arr[]){
    if (n == 1)
    {
        return arr[0];
    }

    int maxOfRest = Maxnum(n - 1, arr + 1);
    return max(arr[0],maxOfRest);
}

int main(){
    int arr[] ={16,24,33,47,55,64,77};

    int n = sizeof(arr) / sizeof(arr[0]);

    int result = Maxnum(n,arr);

    cout << "Maximum num in array : " << result ;
}