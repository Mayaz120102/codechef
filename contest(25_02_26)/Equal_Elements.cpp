#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        long long ans = 0;
        unordered_set<long long> seen;
        for(int i = 0; i < n; i++) {
            if(seen.count(a[i])) {
                ans += 2;          
                seen.clear();      
            } else {
                seen.insert(a[i]);
            }
        }

        cout << ans << endl;
    }
}