// #include <bits/stdc++.h>
// using namespace std;
// int main()
// { 
//   int t;
//    cin>>t;
//    while(t--){
//     int n; cin>>n;
//     vector<long long> a(n), c(n);

//     for(int i =0; i<n; i++) cin>>a[i];
//     for(int i =0; i<n; i++) cin>>c[i];
    
//     vector<pair<long long , long long>> v;

//     for (int i = 0; i < n; i++)
//     {
//         v.push_back({a[i], c[i]});
//     }
    
//     sort(v.begin(), v.end(), greater<>());

//     long long minC = LLONG_MAX;
//     long long ans = 0;

//     for(auto &p:v){
//         minC = min(minC,p.second);
//         ans += p.first * minC;
//     }

//     cout<<ans<<endl;
   
//    }
//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector<long long> a(n), c(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> c[i];

        sort(a.begin(), a.end(), greater<>()); // A descending
        sort(c.begin(), c.end(), greater<>()); // C descending

        long long ans = 0;
        for(int i = 0; i < n; i++) {
            ans += a[i] * c[i];
        }

        cout << ans << "\n";
    }

    return 0;
}
