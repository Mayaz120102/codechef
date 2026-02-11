#include <bits/stdc++.h>
using namespace std;

bool canMakeEqual(vector<int> A) {
    int N = A.size();
    long long sum = 0;
    for(int i = 0; i < N; ++i) sum += A[i];

    long long prefix = 0;
    // We'll simulate operation from right to left
    for(int i = 0; i < N; ++i) {
        prefix += A[i];
        if(prefix > 0) return false; // can't reduce prefix to match
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for(int i = 0; i < N; ++i) cin >> A[i];

        if(canMakeEqual(A)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
