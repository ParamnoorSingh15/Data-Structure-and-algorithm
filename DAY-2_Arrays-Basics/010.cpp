// Check if two arrays are identical (same elements, same order)

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n1;
    int n2;
    cin >> n1;
    cin >> n2;
    vector<int> arr1(n1);
    vector<int> arr2(n2);

    for(int i = 0; i<n1; i++){
        cin >> arr1[i];
    }

    for(int i = 0; i<n1; i++){
        cin >> arr2[i];
    }

    bool flag = true;

    if(n1 != n2){
        cout << "Unidentical" << endl;
        return 0;
    }


    for(int i = 0; i<n1; i++){
        if(arr1[i] != arr2[i]){
            flag = false;
            break;
        }
    }

    if(flag){
        cout << "Identical" << endl;
    }else{
        cout << "Unidentical" << endl;
    }

}