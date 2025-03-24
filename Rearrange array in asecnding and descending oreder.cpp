/*
Rearrange the array such that the first half is arranged in increasing order, and the second half is arranged in decreasing order

Time Complexity: O(nlogn) +O(n).O(nlogn)
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int ArrangeArray(vector<int> &arr,int n){
    sort(arr.begin(),arr.end());
    for(int i=0;i<n/2;i++){
       cout<<arr[i]<<" "; 
    }
    for(int i=n-1;i>=n/2;i--){
        cout<<arr[i]<<" ";
    }
}

int main(){
int n=6;
vector<int>arr={8,7,1,6,5,9};
int result=ArrangeArray(arr,n);
cout<<result<<" ";
}