#include<iostream>

using namespace std;

void countFreq(int arr[],int n)
{
    bool visited[n]={false};
    for(int i=0;i<n;i++){
        if(visited[i]==true){
            continue;
        }

        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                visited[j]=true;
                count++;
            }
        }
        cout<<arr[i]<<" "<<count<<endl;
    }
}
int main(){
    int n=6;
    int arr[] = {10,5,10,15,10,5};
 
    countFreq(arr, n);
    return 0;
}