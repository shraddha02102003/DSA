#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void Sort(int arr[], int n)
{
    sort(arr, arr + n);
}

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
    int n = 8;
    int arr[8] = {2, 3, 1, 9, 3, 1, 3, 9};
    Sort(arr, n);
    cout << "Sorted array elements are " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
cout<<endl;
    int result = RemoveDuplicates(arr, n);
    cout<<"After removing duplicates elements array is "<<endl;

    for (int i = 0; i < result; i++)
    {
        cout << arr[i] << " ";
    }
}