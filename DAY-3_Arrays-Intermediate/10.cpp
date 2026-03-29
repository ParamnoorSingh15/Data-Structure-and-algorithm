// Find equilibrium index: left sum equals right sum

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    vector<int> arr(n);
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        total += arr[i];
    }

    int leftSum = 0;
    for(int i = 0; i<n; i++){
        int rightSum = total - leftSum - arr[i];

        if(leftSum == rightSum){
            cout << i << endl;
            return 0;
        }
        leftSum += arr[i];
    }
    

    return 0;
}