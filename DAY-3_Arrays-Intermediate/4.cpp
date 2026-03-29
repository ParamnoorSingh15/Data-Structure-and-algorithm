// Find all elements that appear odd number of times

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    unordered_map<int,int> mp;
    for(int i = 0; i<n; i++){
        mp[arr[i]] ++;
    }

    for(auto it : mp){
        if(!(it.second ^ 1 )){
            cout << it.first<<" ";
        }
    }
    cout << endl;


    return 0;

}