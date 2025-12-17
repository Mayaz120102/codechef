#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    return b == 0 ? a : gcd(b, a % b);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long d = v[1] - v[0];
        for (int i = 1; i < n - 1; i++)
        {
            d = gcd(d, v[i + 1] - v[i]);
        }

        int totaladd = 0;
        for (int i = 0; i < n-1; i++)
        {
            totaladd += (v[i + 1] - v[i]) / d - 1;
        }

        cout << totaladd << endl;
    }

    return 0;
}
