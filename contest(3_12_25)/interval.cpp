#include <bits/stdc++.h>
using namespace std;

void calcPrefSuff(int a[], int b[], int n, int pref_a[], int suf_a[], int pref_b[], int suf_b[])
{
    pref_a[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        pref_a[i] = max(pref_a[i - 1] + a[i], a[i]);
    }

    suf_a[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        suf_a[i] = max(suf_a[i + 1] + a[i], a[i]);
    }

    pref_b[0] = b[0];
    for (int i = 1; i < n; i++)
    {
        pref_b[i] = max(pref_b[i - 1] + b[i], b[i]);
    }

    suf_b[n - 1] = b[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        suf_b[i] = max(suf_b[i + 1] + b[i], b[i]);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> b[i];
        }
        int pref_a[n], suf_a[n], pref_b[n], suf_b[n];

        calcPrefSuff(a, b, n, pref_a, suf_a, pref_b, suf_b);

        int max_score = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            max_score = max(max_score, pref_a[i] + suf_b[i]);

            max_score = max(max_score, pref_b[i] + suf_a[i]);
        }
        cout << max_score << endl;
    }
    return 0;
}
