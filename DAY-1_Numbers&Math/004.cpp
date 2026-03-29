// LCM of two number

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin >> a;
    cin >> b;
    int temp1 = a;
    int temp2 = b;
    int gcd = 1;

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

        long long  lcm = (1LL * temp1/gcd) * temp2;
        cout <<lcm<<endl;
        
        
}