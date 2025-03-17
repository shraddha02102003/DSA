#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//Brute force approach -method 1

int LargestElement(vector<int>&arr,int n){
    sort(arr.begin(),arr.end());
    return arr[n-1];
}

//Method 2
int LargestElement(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int main(){

int arr[]={2,4,1,3,5};
int n=5;
int result=LargestElement(arr,n);
cout<<"The Largest element is "<<result<<" ";
}