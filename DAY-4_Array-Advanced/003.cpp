// Find first occurrence of X in sorted array — O(log n)

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    int x;
    cin >> x;

    int st = 0; 
    int end = n-1;


    int ans = -1;
    while(st <= end){
        int mid = st + (end-st)/2;
        if(x > arr[mid])
            st = mid + 1;
        else if (x < arr[mid])
            end = mid - 1;
        else{
            ans = mid;
            end = mid -1;
        }
    }
    cout << ans << endl;
        


    return 0;
}