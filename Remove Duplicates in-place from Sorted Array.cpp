#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int RemoveDuplicates(int arr[], int n)
{
    int j = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[j])
        {
            j++;
            arr[j] = arr[i];
        }
    }
    return j + 1;
}

int main()
{
    int n = 9;
    int arr[9] = {1, 1, 1, 2, 2, 2, 3, 3,4};
    int result = RemoveDuplicates(arr, n);
    for (int i = 0; i < result; i++)
    {
        cout << arr[i] << " ";
    }
}