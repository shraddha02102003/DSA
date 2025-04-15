#include<iostream>
using namespace std;
/*
int main(){
int n=6;
int arr[n]={6,7,9,5,3,10};
int k=3;
int ans=-1;

for(int i=0;i<n;i++){
    if(arr[i]==k){
        ans=i;
        break;
    }
}
cout<<"The element is present in "<<ans <<" index ";
}
*/

//Method 2:binary search
int main(){
    int n=6;
    int arr[n]={6,7,9,5,3,10};
    int k=10;
    int start=0;
    int end=n-1;

    int ans=-1;

    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]>k){
            end=mid-1;
        }
        else if(arr[mid]<k){
    start=mid+1;
        }
        else{
            ans=mid;
            break;
        }
    }
    cout<<"The element is present in  "<<ans <<" index"<<endl;
}