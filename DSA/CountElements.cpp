#include <iostream>
#include <iterator>
using namespace std;

int Numcount(int n, int arr[])
{
    if (n == 0)
    {
        return -1;
    }
    else
    {
        return 1 + Numcount(n - 1, arr + 1);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = Numcount(n, arr);

    cout << "the result is : " << result;

    return 0;
}