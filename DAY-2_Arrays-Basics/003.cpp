// Find second largest element — single pass, NO sorting allowed

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector <int> arr(n);

    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    int max = arr[0];
    int secmax = INT_MIN;

    for(int i = 1; i<n; i++){
        if(arr[i] > max && secmax < max){
            max = arr[i];
            secmax = max;
        }
    }

    if(secmax == INT_MIN){
        cout << -1 << endl;
    }else{
        cout << secmax << endl;
    }

    return 0;
}