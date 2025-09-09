#include<iostream>
using namespace std;

//insertatbeginning
void insertatbeginning(int arr[],int n,int value1){
   for(int i=n-1;i>=0;i--){
    arr[i+1]=arr[i];
   }
   arr[0]=value1;
}

void insertatend(int arr[],int n,int value2){
   
    arr[n-1]=value2;
   }


void insertatposition(int arr[],int n,int value3,int pos){
   for(int i=n;i>=pos;i--){
    arr[i]=arr[i-1];
   }
   arr[pos-1]=value3;
}
int main(){
int n=8;
int pos=5;
int arr[9]={10,9,14,8,20,48,16,9};
int value1=20;
int value2=30;
int value3=40;

insertatbeginning(arr,n,value1);
cout<<"Enter the element to add at beginning in an array "<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
insertatend(arr,n,value2);
cout<<"Enter the element to add at end in an array "<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
insertatposition(arr,n,value3,pos);
cout<<"Enter the element to add at any position in an array "<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

}
