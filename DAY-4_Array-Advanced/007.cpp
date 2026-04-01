// Integer square root using binary search (no Math.sqrt)

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;

    int st = 1;
    int end = n;
    int ans;
    while(st <= end){
        int mid = st + (end-st)/2;
        if(1LL * mid*mid == n){
            cout << mid << endl;
            return 0;
        }
        else if(1LL * mid * mid < n){
            ans = mid;
            st = mid + 1;
        }
        else
            end = mid - 1;
    }

    cout << ans << endl;





    return 0;
}