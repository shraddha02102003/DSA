#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*

//method -1
void findNonRepeating(vector<int>&arr,int n){
    bool chk;
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
         chk=false;
        if(arr[i]==arr[j]&&i!=j){
            chk=true;
            break;
        }
    }
   if(!chk){
    cout<<arr[i]<<" ";
   }
}
}
*/

// method 2:

void findNonRepeating(vector<int> &arr, int n)
{
    sort(arr.begin(), arr.end());

    if (arr[0] != arr[1])
    
        cout << arr[0] << " ";
    

    // For edge cases, i.e, 0th and (n-1)th element.
    // If the 0th element is not equal to the 1st element,
    //  then the 0th element is non-repeating. Similarly if (n-1)th
    // element is not equal to (n-2)th element,
    //(n-1)th element is non-repeating element.
    for (int i = 1; i < n - 1; i++)
    
        if (arr[i - 1] != arr[i] && arr[i] != arr[i + 1])

            cout << arr[i] << " ";
    
    if (arr[arr[n] - 2] != arr[arr[n] - 1])
    
        cout << arr[arr[n] - 1] << endl;
    
}
int main()
{
    int n = 6;
    vector<int> arr = {1, 2, -1, 1, 3, 1};

    cout << "Unique array is " << endl;
    findNonRepeating(arr, n);
}