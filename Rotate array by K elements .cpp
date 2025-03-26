// Rotate array by K elements : Block Swap Algorithm
#include <iostream>
using namespace std;

void swap(int arr[], int k, int a, int b)
{
    for (int i = 0; i < k; i++)
    {
        int temp = arr[a ];
        arr[a ] = arr[b ];
        arr[b ] = temp;
    }
}
void blockswap(int arr[], int k, int n)
{
    if (k == 0 || k == n)
    {
        return;
    }
    else if (k == n - k)
    {
        swap(arr, k,0, n - k);
        return;
    }
    else if (k < n - k)
    {
        swap(arr, k,0, n - k );
        blockswap(arr, k, n - k);
    }
    else
    {
        swap(arr, n - k,0,k);
        blockswap(arr + n - k, 2 * k - n, k);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int k = 2;
    blockswap(arr, k, n);
    cout << "After Rotating the array " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}