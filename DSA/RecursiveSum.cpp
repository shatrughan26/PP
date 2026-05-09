#include <iostream>
using namespace std;

int sum(int n, int arr[])
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return arr[n - 1] + sum(n-1, arr);
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Sum of the element : " << sum(5, arr) << endl;
    return 0;
}
