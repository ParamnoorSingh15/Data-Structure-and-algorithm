// Convert binary string to decimal number

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin >> n;
    int i = 1;

    int ans = 0;

    while(n > 0){
        int bit = n%10;
        ans  = ans + bit * i;
        n = n / 10;
        i = i*2;
    }

    cout << ans << endl;
    
}