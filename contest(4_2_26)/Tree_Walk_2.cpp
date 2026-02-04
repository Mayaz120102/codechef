#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

// Encode visit counts (0,1,2) in base-3
int encode(const vector<int>& cnt) {
    int code = 0;
    int base = 1;
    for (int x : cnt) {
        code += x * base;
        base *= 3;
    }
    return code;
}

int N;
vector<vector<int>> adj;
unordered_map<int,int> memo;

int dfs(int u, vector<int>& cnt) {
    // If reached N (0-indexed: N-1)
    if (u == N-1) return 1;

    int key = u * pow(3,N) + encode(cnt); // unique key for memo
    if (memo.count(key)) return memo[key];

    int res = 0;

    for (int v : adj[u]) {
        if (v == N-1 && cnt[v] == 0) { // can go to N only at last
            res = (res + 1) % MOD;
        } else if (v != N-1 && cnt[v] < 2) { // intermediate node ≤2 times
            cnt[v]++;
            res = (res + dfs(v, cnt)) % MOD;
            cnt[v]--;
        }
    }

    return memo[key] = res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        cin >> N;
        adj.assign(N, vector<int>());
        memo.clear();

        for (int i = 0; i < N-1; i++) {
            int u, v;
            cin >> u >> v;
            u--, v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> cnt(N,0);
        cnt[0] = 1; // start at node 1 (0-indexed)
        cout << dfs(0, cnt) % MOD << "\n";
    }

    return 0;
}
