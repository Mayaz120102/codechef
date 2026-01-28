#include <bits/stdc++.h>
using namespace std;
int main()
{ 
  int t;
  cin>>t;
  while(t--){
      int n,x,k;cin>>n>>x>>k;
      int r = x%k;
      int ans = r;

      if(x+(k-r)<=n) ans = min(ans, k-r);

      ans = min(ans,x);

      cout<<ans<<endl;
  }
  return 0;
}
