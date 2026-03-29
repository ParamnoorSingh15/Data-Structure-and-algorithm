// Find if any duplicate exists in array (use HashSet)

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

    unordered_set<int> st;

    for (int i = 0; i < n; i++)
    {
        if (st.find(arr[i]) != st.end())
        {
            cout << "YES" << endl;
            return 0;
        }
        st.insert(arr[i]);
    }

    cout << "NO" << endl;
    

    return 0;
}