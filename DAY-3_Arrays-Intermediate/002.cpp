// Print all elements appearing exactly TWICE [TCS Session-1]

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
        if(it.second == 2){
            cout << it.first<<endl;
        }
    }


    return 0;

}