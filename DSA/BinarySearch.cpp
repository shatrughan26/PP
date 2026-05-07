#include <iostream>
using namespace std;
int binary_search(int arr[], int low, int high, int target)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (target == arr[mid])
        {
            return mid;
        }
        else if (target < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int low = 0;
    int high = sizeof(arr) / sizeof(arr[0]) - 1;
    int target = 9;

    int result = binary_search(arr, low, high, target);

    if (result != -1)
    {
        cout << "Element found at index : " << result;
    }
    else
    {
        cout << "Element not found";
    }

    return 0;
}