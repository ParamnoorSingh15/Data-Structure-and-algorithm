// Two Sum: find indices of pair that sums to target — O(n) [TCS Core]

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

    int target;
    cin >> target;


    // TC - O(n2)

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] + arr[j] == target)
    //         {
    //             cout << i << " " << j << endl;
    //             break;
    //         }
    //     }
    // }

    // TC - O(nlogn) two pointer approach

    // sort(arr.begin(), arr.end());
    // int start = 0;
    // int end = n-1;
    // while(start < end){
    //     int sum = arr[start] + arr[end];
    //     if(sum == target){
    //         cout << start << " " << end << endl;
    //         break;
    //     }
    //     if(sum > target)
    //         end --;
    //     else
    //         start ++;
    // } 

    // TC - O(n) hashing

    unordered_map<int,int> mp;

    for(int i = 0; i<n; i++){
        int first = arr[i];
        int second = target - first;

        if(mp.find(second) != mp.end()){
            cout << mp[second] << " " << i << endl;
        }

        mp[first] = i;
    }


}