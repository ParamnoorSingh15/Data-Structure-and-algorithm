// Maximum sum contiguous subarray — Kadane's algorithm

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    // TC- O(n2)
    // int maxii = INT_MIN;
    // for(int i = 0; i<n; i++){
    //     int sum = 0;
    //     for(int j = i; j<n; j++){
    //         sum = sum + arr[j];
    //         maxii = max(maxii, sum);
    //     }


    // }
    // cout<<maxii<<endl;

    // TC - O(n) kadanes algo negative number in currentSum will never contribute to maximum sum,  so reset it to 0 
    int currentSum = 0;
    int maxSum = INT_MIN;
    for(int i = 0; i<n; i++){
        currentSum = currentSum + arr[i];
        maxSum = max(maxSum, currentSum);
        if(currentSum < 0)
            currentSum = 0;
    }

    cout << maxSum <<endl;

    return 0;
}