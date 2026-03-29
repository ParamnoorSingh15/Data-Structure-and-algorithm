// Find which century a year belongs to (2001 -> 21st)

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;
    int century;

    if(n % 100 == 0 ){
        century = n/100;
    }else{
        century = n/100 + 1;
    }
    cout<<century<<endl;


    return 0;
}