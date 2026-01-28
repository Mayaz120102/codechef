#include <bits/stdc++.h>
using namespace std;
int main()
{ 
  int t;
  cin>>t;
  while(t--){
      int n;cin>>n;
      vector<int>a(n), cnt(n+1,0);

      for(int i =0;i<n;i++) {
        cin>>a[i];
        cnt[a[i]]++;
      }
      int prev = cnt[1];

      int ans = prev;

      for(int i=2;i<=n; i++){
        int cr = min(cnt[i],prev);
        ans += cr;
        prev = cr;
      }
      cout<<ans<<endl;
  }
  return 0;
}
