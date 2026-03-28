// Check if N is an Armstrong number

#include<bits/stdc++.h>
using namespace std;

int count(int n){
    int ans = 0;
    while(n!=0){
        int rem = n%10;
        ans ++;
        n = n/10;
    }
    return ans;
}


int main(){

    int n;
    cin >> n;

    int temp = n;
    int ans = 0;

    

    int i = count(n);

    while(temp>0){
        int rem = temp % 10;
        ans += pow(rem,i);
        temp = temp / 10;
    }

    if(n == ans){
        cout << "It is a armstrong number" << endl;
    }
    else{
        cout << "It is not a armstrong number" << endl;
    }
}