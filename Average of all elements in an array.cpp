#include<iostream>
using namespace std;

int avgElements(int arr[],int n){
    int sum=0;
    int avg=0;

    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        avg=sum/n;
    }
    return avg;
}

int main(){
int n=5;
int arr[5] ;
cout<<"Enter the 5 elements " <<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"Average of all elements "<<avgElements(arr,n)<<endl; 
}