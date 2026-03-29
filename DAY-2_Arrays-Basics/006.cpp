// Count how many elements are greater than the array average

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    int sum = accumulate(arr.begin(), arr.end(), 0);

    int avg = sum / n;

    int count = 0;

    for(int i = 0; i<n; i++){
        if(arr[i] > avg){
            count ++;
        }
    }

    cout << count << endl;


    return 0;
}