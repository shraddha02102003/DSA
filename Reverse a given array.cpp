#include<iostream>

using namespace std;

//Recursive approach approach
void ReverseArray(int arr[],int n){
int start=0;
int end=n-1;
while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
}
}
int main(){
int n=5;
int arr[5]={1,2,3,4,5};
ReverseArray(arr,n);
cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}


//Method 2:
void PrintArray(int arr[],int n){
    cout<<"The reversed array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void ReverseArray(int arr[],int n){
    //temp array created 
    int temp[n];

    //copy last element to first in temp and so on
    for(int i=0;i<n;i++){
        temp[i]=arr[n-i-1];
    }

    //copy reverse an array
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }
    
}
int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};
    ReverseArray(arr,n);
    PrintArray(arr,n);
    return 0;
    }