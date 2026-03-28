// Move all zeros to end while keeping relative order of non-zeros

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    int pos = 0;

    for(int i = 0; i<n; i++){
        if(arr[i] != 0){
            arr[pos++] = arr[i];
        }
    }

    while(pos < n){
        arr[pos++] = 0;
    }

    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;
}