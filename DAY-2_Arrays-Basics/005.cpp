// Linear search — return index, -1 if not found

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    int target;
    cin >> target;

    int index = -1;

    for(int i = 0; i<n; i++){
        if(arr[i] == target){
            index = i;
            break;
        }
    }

    cout << index << endl;


    return 0;
}