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
        vector<int> v(n);
        long long  sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }

        if (sum >= 0)
        {
            cout << 0 << endl;
        }
        else
        {   long long x = (-sum + n -1)/n;
            cout << x << endl;
        }
    }

    return 0;
}
