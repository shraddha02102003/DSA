#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//Brute Force Approach
int SmallestElement(vector<int>&arr){
    sort(arr.begin(),arr.end());
    return arr[0];
}

int main(){

vector<int> arr={2,5,1,3,0};
int result=SmallestElement(arr);
cout<<result<<endl;
}