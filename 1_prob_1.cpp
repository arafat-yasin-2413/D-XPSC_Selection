#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int ar[n];
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ar[i] = x;
            v.push_back(x);
        }

        // for(int i = 0; i<n; i++)
        // {
        //     cout<<ar[i]<<" ";
        // }

        // cout<<endl;
        // for(int i = 0; i<n; i++)
        // {
        //     cout<<v[i]<<" ";
        // }

        sort(v.begin(), v.end());
        // for(int i = 0; i<n; i++)
        // {
        //     cout<<v[i]<<" ";
        // }

        int val1 = v[v.size() - 1];
        int val2 = v[v.size() - 2];
        // cout<<val1<<" "<<val2<<endl;

        for (int i = 0; i < n; i++)
        {
            if (ar[i] == val1 or ar[i] == val2)
            {
                cout << i << " ";
            }
        }
        cout<<endl;
    }
    return 0;
}