// Find absolute difference between product and sum of digits of N

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    int temp = n;
    int sum = 0;
    int prod = 1;

    while(n > 0){
        int rem = n%10;
        sum += rem;
        n = n/10;
    }
    while(temp > 0){
        int rem = temp%10;
        prod *= rem;
        temp = temp/10;
    }

    cout << abs(prod-sum) << endl;
}