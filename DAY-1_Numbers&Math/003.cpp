// GCD of a number

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin >> a;
    cin >> b;
    int gcd = 1;

    // euclidean formula gcd(a,b) = gcd(b, a-b) if b becomes zero other one is gcd

    while(a > 0 && b > 0){
        if(a>b)
            a = a%b;
        else
            b = b%a;
        
    }
    if(a==0)
        gcd = b;
    else
        gcd = a;
    
    cout << gcd << endl;
    
    
}