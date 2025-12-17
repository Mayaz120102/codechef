#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int cnt = 0;
        sort(a, a + n);
        int b[n];
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            flag = 1;
            for (int j = 0; j < cnt; j++)
            {
                if ((a[i] ^ b[j]) != abs(a[i] - b[j]))
                    flag = 0;
                break;
            }
            if (flag == 1)
            {
                b[cnt++] = a[i];
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
