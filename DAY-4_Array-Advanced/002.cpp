// Binary search on sorted array — return index or -1
// Binary search always works o sorted arrays

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

    int st = 0; 
    int end = n-1;


    while(st <= end){
        int mid = st + (end-st)/2;
        if(arr[mid] == target){
            cout << "Element found at "<< mid << endl;
            return 0;

        }
        else if(arr[mid] > target)
            end = mid - 1;
        else
            st = mid + 1;
    }
    
    cout << -1 << endl;




}