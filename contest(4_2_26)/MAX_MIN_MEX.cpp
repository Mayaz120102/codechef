#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;
const int MAXN = 200000 + 5;
long long fact[MAXN];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Precompute factorials modulo MOD
    fact[0] = 1;
    for (int i = 1; i < MAXN; i++) {
        fact[i] = fact[i-1] * i % MOD;
    }

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) cin >> A[i];

        if (N == 1) {
            cout << 1 << "\n";
        } else {
            long long ans = 2 * fact[N-2] % MOD;
            cout << ans << "\n";
        }
    }

    return 0;
}
