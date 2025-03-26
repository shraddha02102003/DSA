#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int SumOfElements(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}

int main(){
int n=5;
int arr[n]={1,2,3,4,5};
cout<<"The sum of all array elements is "<<SumOfElements(arr,n)<<endl;

}