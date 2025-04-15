#include<iostream>
#include<vector>
using namespace std;

void RepeatElements(int arr[],int n){
    int temp[n];
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                temp[count++]=arr[j];
            }
        }
        
        for (int i = 0; i < n; i++)
        { 
          if(temp[i]!=temp[i+1]){
            cout<<temp[i]<<" ";
          }  
        }
        
    }
}


int main(){

int arr[8]={1,1,2,3,4,4,5,2};

RepeatElements(arr,8);
}