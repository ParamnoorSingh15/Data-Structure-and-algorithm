// Check if sum of digits of N is divisible by 3

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans = 0;
    while(n!=0){
        int rem = n%10;
        ans = ans + rem;
        n = n/10;
    }
    if(ans % 3 == 0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    
    
}