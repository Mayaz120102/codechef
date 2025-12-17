#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int r, b, g;
        cin >> r >> b >> g;
        //   int bundles  = min(r,b,g);
        int numb_bundle = min({r, b, g});
        int earn_coins_bundle = numb_bundle * 10;
        // cout << earn_coins_bundle;
        int left_gems = (r - numb_bundle) * 3 + (b - numb_bundle) * 3 + (g - numb_bundle) * 3;
        cout << earn_coins_bundle + left_gems << endl;
    }
    return 0;
}
