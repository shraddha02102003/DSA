#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//Brute Force Approach-method 1

int SmallestElement(vector<int>&arr){
    sort(arr.begin(),arr.end());
    return arr[0];
}


//method 2

int SmallestElement(vector<int>&arr,int n){
int min=arr[0];
   for(int i=0;i<n;i++){
    if(min>arr[i]){
        min=arr[i];
    }
}
return min;
}


int main(){
int n=10;
vector<int> arr={24,45,12,66,43,77,5,90,37,89};
int result=SmallestElement(arr,n);
cout<<result<<endl;
}