#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;
/*
//Brute Approach
int maxProdSubarray(vector<int>&arr,int n){
    int result=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int prod=1;
            for(int k=i;k<=j;k++){
                prod*=arr[k];
            result=max(result,prod);    
            }
        }
    }
    return result;
}
*/

/*
//Better Approach
int maxProdSubarray(vector<int>&arr,int n){
    int result=arr[0];
    for(int i=0;i<n-1;i++){
        int p=arr[i];
        for(int j=i+1;j<n;j++){
            result=max(result,p);
            p*=arr[j];
        }
        result=max(result,p);
    }
    return result;
}
*/

//kadane`s approach
int maxProdSubarray(vector<int>&arr){
    int prod1=arr[0],prod2=arr[0],result=arr[0];
//arr[i]=current array element
    for(int i=1;i<arr.size();i++){
        int temp=max({arr[i],prod1*arr[i],prod2*arr[i]});
        prod2=min({arr[i],prod1*arr[i],prod2*arr[i]});
        prod1=temp;
        result=max(result,prod1);
    }
    return result;
}
int main(){
 
    vector<int>arr= {1,2,3,4,5,0};
    int num = maxProdSubarray(arr);
    cout<<"Max prod subarray is "<<num<<endl;
}