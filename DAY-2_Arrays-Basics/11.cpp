// Find equilibrium index where left sum == right sum
// Equilibrium index: prefix sum from left equals suffix sum (total - leftSum - arr[i])

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    int total = accumulate(arr.begin(), arr.end(), 0);

    int leftSum = 0;
    for(int i = 0; i<n; i++){
        int rightSum = total - leftSum - arr[i];
        if(leftSum == rightSum){
            cout << i << endl;
            break;
        }
        leftSum += arr[i];
    }


    return 0;
}