// Count total occurrences of X (last - first + 1)

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int x;
    cin >> x;


    int st = 0, end = n - 1;
    int first = -1;

    while(st <= end){
        int mid = st + (end - st) / 2;

        if(arr[mid] < x){
            st = mid + 1;
        }
        else if(arr[mid] > x){
            end = mid - 1;
        }
        else{
            first = mid;
            end = mid - 1; 
        }
    }


    st = 0, end = n - 1;
    int last = -1;

    while(st <= end){
        int mid = st + (end - st) / 2;

        if(arr[mid] < x){
            st = mid + 1;
        }
        else if(arr[mid] > x){
            end = mid - 1;
        }
        else{
            last = mid;
            st = mid + 1; 
        }
    }


    if(first == -1){
        cout << "count = 0" << endl;
    }
    else{
        cout << "count = " << last - first + 1 << endl;
    }

    return 0;
}