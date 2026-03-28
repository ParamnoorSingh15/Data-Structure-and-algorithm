// Find missing number in array of 1 to N using sum formula

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;

    vector<int> arr(n-1);
    int sum2 = 0;
    for(int i = 0; i<n-1; i++){
        cin >> arr[i];
        sum2 += arr[i];
    }

    int sum = (n*(n+1))/2;
    cout << sum - sum2 << endl;


    return 0;
}