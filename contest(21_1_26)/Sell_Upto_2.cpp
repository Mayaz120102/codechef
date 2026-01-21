// #include <bits/stdc++.h>
// using namespace std;
// int main()
// { 
//   int t;
//   cin>>t;
//   while(t--){
//       int n;
//       cin>>n;
//       vector<long long >a(n);
//       for(auto &x :a) cin>>x;
      
//       long long prf = 0, w=0; 
//     //   long long mx =0;

//       for(int  i = n-1; i>=0; i++){
//         w++;
//         // mx = max(mx,a[i]);
//         long long sl = min(2LL, w);
//         prf += sl*a[i];
//         w -= sl;
//       }
//      cout<<prf<<endl;
//   }
//   return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; 
    cin >> T;
    while (T--) {
        int N; 
        cin >> N;
        vector<long long> A(N);
        for (auto &x : A) cin >> x;

        // dp[i][watches] = max profit after day i with w watches
        vector<vector<long long>> dp(N + 1, vector<long long>(N + 3, -1e18));
        dp[0][0] = 0; // day 0, 0 watches, 0 profit

        for (int day = 0; day < N; day++) {
            for (int w = 0; w <= N; w++) {
                if (dp[day][w] < 0) continue;
                int new_watches = w + 1; // get 1 watch today
                // sell 0,1,2 watches
                for (int sell = 0; sell <= 2 && sell <= new_watches; sell++) {
                    int remaining = new_watches - sell;
                    dp[day + 1][remaining] = max(dp[day + 1][remaining], dp[day][w] + sell * A[day]);
                }
            }
        }

        long long ans = 0;
        for (int w = 0; w <= N; w++) ans = max(ans, dp[N][w]);
        cout << ans << "\n";
    }
}
