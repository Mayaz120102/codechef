#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;

        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        long long y = 0, td = 0;
        for (int i = 0; i < n; i++)
        {
            td = max(td, a[i] - y);
            y = max(y + b[i], a[i]);
        }

        long long totalB = 0;
        for (int i = 0; i < n; i++)
            totalB += b[i];
        long long ans = 0;

        for (long long x = 1; x <= min(m, td); x++)
        {
            long long Yx = x;
            for (int i = 0; i < n; i++)
            {
                Yx = max(Yx + b[i], a[i]);
            }
            ans += Yx;
        }

        if (m > td)
        {
            long long L = td + 1;
            long long R = m;
            long long count = R - L + 1;

            long long sumX = (L + R) * count / 2;
            ans += sumX + totalB * count;
        }

        cout << ans << "\n";
    }

    return 0;
}
