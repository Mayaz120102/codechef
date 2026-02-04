#include <bits/stdc++.h>
using namespace std;
int main()
{ 
  int t;
  cin>>t;
  while(t--){
      long long b,g,x,y,n;
      cin>>b>>g>>x>>y>>n;
      if(b+g==0) {
        cout<<0<<endl;
        continue;
      }

      long long l = (b+g+n-1)/n;
      long long r = LLONG_MAX;
      if(x>0) r = min(r,b/x);
      if(y>0) r = min(r,g/y);

      if(l>r) cout<<-1<<endl;
      else cout<<l<<endl;
  }
  return 0;
}
