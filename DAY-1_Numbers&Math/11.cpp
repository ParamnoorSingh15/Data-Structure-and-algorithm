// Check if N is a strong number (sum of factorial of digits = N)

#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    else
        return n * factorial(n-1);
}

int main(){

    int n;
    cin >> n;
    int temp = n;
    int ans = 0;

    while(n>0){
        int rem = n % 10;
        ans = ans + factorial(rem);
        n = n/10;
    }

    if(temp == ans){
        cout << "It is a strong number" << endl;
    }else{
        cout << "It is not a strong number" << endl;
    }



    return 0;
}