// Replace each element with its frequency in the array [TCS Session-13]

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    map<int,int> mp;
    for(int i = 0; i<n; i++){
        mp[arr[i]] ++;
    }

    for(int i = 0; i<n; i++){
        arr[i] = mp[arr[i]];
    }

    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}