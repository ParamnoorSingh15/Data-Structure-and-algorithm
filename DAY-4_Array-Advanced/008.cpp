// Find minimum element in rotated sorted array

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;

    vector <int> arr(n);

    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    int mini = INT_MAX;

    int st = 0;
    int end = n-1;

    while(st <= end){
        int mid = st + (end - st)/2;

        if(arr[st] <= arr[end]){
            mini = min(mini, arr[st]);
            break;
        }
        if(arr[st] <= arr[mid]){ // left half sorted
            mini = min(mini, arr[st]);
            st = mid + 1;
        }
        else{
            mini = min(mini, arr[mid]);
            end = mid - 1;
        }

    }

    cout << mini << endl;



    return 0;
}