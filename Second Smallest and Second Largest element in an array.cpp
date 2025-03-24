#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//second smallest 

int SecondSmallest(vector<int>&arr,int n){
    int small=arr[0];
    int secondsmall=1000000;
    for(int i=0;i<n;i++){
        if(arr[i]<small){
            secondsmall=small;
            small=arr[i];
        }
    else if(arr[i]!=small && arr[i]<secondsmall){
        secondsmall =arr[i];
    }
    }
    return secondsmall;
}

int SecondLargest(vector<int>&arr,int n){
    int large=arr[0];
    int secondlarge=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>large){
            secondlarge=large;
            large=arr[i];
        }
    else if(arr[i]!=large && arr[i]>secondlarge){
        secondlarge=arr[i];
    }
    }
    return secondlarge;
}
int FindElement(vector<int>&arr,int n){
    int a=SecondSmallest(arr,n);
    int b=SecondLargest(arr,n);
}

int main(){
    int n=5;
    vector<int>arr={1,2,3,4,5};
    a,b;
   cout<<result<<endl;
}

