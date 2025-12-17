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
        int F[200005];
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> F[i];
            sum += F[i];
        }

        long long lower = 1, upper = sum, ans = 0;

        while (lower <= upper)
        {
            long long mid = (lower + upper) / 2;
            long long sum1 = 0;
            for (int i = 0; i < n; i++)
            {
                sum1 += min((long long)F[i], mid);
            }

            if (sum1 >= mid * mid)
            {
                ans = mid;
                lower = mid + 1;
            }
            else
            {
                upper = mid - 1;
            }
        }

        cout << ans << endl;
    }
}
