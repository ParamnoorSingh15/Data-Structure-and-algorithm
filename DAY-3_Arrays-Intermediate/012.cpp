// Count subarrays with sum equal to zero/K

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

    int count = 0;
    int prefixSum = 0;
    unordered_map<int, int> mp;

    // subArrSum[i,j] = PS[j] - PS[i-1] == k or 0

    for(int i = 0; i<n; i++){
        prefixSum += arr[i];
        if(prefixSum == 0){
            count ++;
        }

        if(mp.find(prefixSum) != mp.end()){
            count = count + mp[prefixSum];
        }

        mp[prefixSum] ++;
    }

    cout << count << endl;

    
        return 0;
    }
