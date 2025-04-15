#include<iostream>
#include<set>
#include<algorithm>

using namespace std;

int rankElement(int arr[],int n){
    for(int i=0;i<n;i++){
    set<int>s;
    for(int j=0;j<n;j++){
        if(arr[j]<arr[i]){
            s.insert(arr[j]);
        }
    } 
    cout<<s.size()+1<<endl;
   }
}

int main(){
    int n=6;
    int arr[n]={20,15,26,2,98,6};
    cout<<"The index of element is:"<<rankElement(arr,n)<<endl;

}