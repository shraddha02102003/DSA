#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void Sort (vector<int> &arr,int n){
    sort(arr.begin(),arr.end());
    
    cout<<"The sorted array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void MedianOfArray(vector<int> &arr,int n){
    cout<<"The Median of an array is "<<endl;
    if(n%2==0){
        int a=(n/2)-1;
        int b=(n/2);
        cout<<(double)(arr[a]+arr[b])/2;
    }
    else{
        cout<<arr[(n/2)];
    }
}

int main(){
int n=7;
vector<int> arr={3,2,1,4,7,12,6};
Sort(arr,n);
MedianOfArray(arr,n);
}