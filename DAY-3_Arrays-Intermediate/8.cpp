// Rotate array left by K positions (reverse trick)

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

    // This is right rotation by (n-k) which is equivalent to left rotation by k but we have to do left rotation by k

    // reverse(arr.begin(), arr.end());
    // reverse(arr.begin(), arr.begin() + (n-k));
    // reverse(arr.begin() + (n-k), arr.end());

    // This is left rotation by k

    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin()+k, arr.end());
    reverse(arr.begin(), arr.end());

    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    

    return 0;
}