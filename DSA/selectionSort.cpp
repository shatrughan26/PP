#include <iostream>
using namespace std;

void selection_sort(int arr[])
{
    int i, j;
    for (i = 0; i < 8; i++)
    {
        int min = i;
        for (j = i + 1; j < 9; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
                
                
            }
        }
        swap(arr[i],arr[min]);
    }
}

int main()
{
    int arr[9] = {5, 3, 1, 2, 12, 4, 6, 9, 8};

    selection_sort(arr);

    for(int i = 0; i < 9; i++){
        cout << arr[i] << ' ';
    }

    return 0;
}
