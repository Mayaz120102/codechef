#include <bits/stdc++.h>
using namespace std;
int main()
{ 
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<long long>v(n);
    for(int i =0; i<n; i++) cin>>v[i];


    vector<vector<long long>> mn(n,vector<long long>(n));
    vector<vector<long long>> mx(n,vector<long long>(n));

    for(int i =0; i<n; i++) mn[i][i] = mx[i][i] =v[i];

    for (int len = 2; len<< count; i++)
    {
        /* code */
    }
    
  }
  return 0;
}




#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<long long> A(N);
        for (int i = 0; i < N; i++)
            cin >> A[i];

        vector<vector<long long>> mn(N, vector<long long>(N));
        vector<vector<long long>> mx(N, vector<long long>(N));

        // Base case
        for (int i = 0; i < N; i++) {
            mn[i][i] = mx[i][i] = A[i];
        }

        // Interval DP
        for (int len = 2; len <= N; len++) {
            for (int l = 0; l + len - 1 < N; l++) {
                int r = l + len - 1;

                mn[l][r] = LLONG_MAX;
                mx[l][r] = LLONG_MIN;

                for (int k = l; k < r; k++) {
                    // Combine left and right
                    long long candidates[] = {
                        mn[l][k] + 2 * mn[k + 1][r],
                        mn[l][k] + 2 * mx[k + 1][r],
                        mx[l][k] + 2 * mn[k + 1][r],
                        mx[l][k] + 2 * mx[k + 1][r]
                    };

                    for (long long v : candidates) {
                        mn[l][r] = min(mn[l][r], v);
                        mx[l][r] = max(mx[l][r], v);
                    }
                }
            }
        }

        cout << mn[0][N - 1] << " " << mx[0][N - 1] << "\n";
    }

    return 0;
}
