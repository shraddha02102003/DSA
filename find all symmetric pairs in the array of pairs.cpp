#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;

/*
//method 1:
vector<pair<int, int>> symmetricPairs(vector<vector<int>> &arr, int n)
{
    vector<pair<int, int>> result;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j][0] == arr[i][1] && arr[j][1] == arr[i][0])
            {
                result.push_back({arr[i][0], arr[i][1]});
                break;
            }
        }
    }
    return result;
}
*/

/*
int main()
{
    int n = 5;
    vector<vector<int>> arr = {{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}};

    vector<pair<int, int>> result = symmetricPairs(arr, n);
    for (auto num : result)
    {
        cout << "("<<num.first << ", " << num.second << ") "<<" ";
    }
    cout << endl;
}*/


int main(){
    int n = 5;
	int arr[5][2] = {{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}};
    unordered_map<int,int>mp;
    cout<<"The symmetric pairs are :"<<endl;
    for(int i=0;i<n;i++){
        int first=arr[i][0];
        int second=arr[i][1];

        if(mp.find(second)!=mp.end()&& mp[second]==first){
cout<<"("<<first<<" "<<second<<")"<<" ";
        }
        else{
            mp[first]=second;
        }
    }
}