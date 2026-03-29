// Find all pairs with given difference D

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

    int d;
    cin >> d;

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int current = arr[i];
        int complement = current - d;
        if (mp.find(complement) != mp.end())
        {
            cout << complement << " " << current << endl;
        }
        mp[current] = i;
    }

    return 0;
}