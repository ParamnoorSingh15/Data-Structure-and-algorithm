// Rotate array right by K positions

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cin >> k;


    // Right rotate by k position
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin()+k, arr.end());

    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    

    return 0;
}