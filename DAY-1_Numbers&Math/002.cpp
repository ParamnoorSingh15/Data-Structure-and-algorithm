// Check if a number is prime using sqrt(N) loop

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    if(n == 1){
        cout<<"Neither prime nor composite"<<endl;
        return 0;
    }
    bool flag = true;

    for(int i = 2; i<sqrt(n); i++){
        if(n%i ==0 ){
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<"Prime number"<<endl;
    }
    else{
        cout<<"Not Prime number"<<endl;
    }

}
