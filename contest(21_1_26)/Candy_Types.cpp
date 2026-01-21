#include <bits/stdc++.h>
using namespace std;
int main()
{ 
  int t;
  cin>>t;
  while(t--){
      int n;cin>>n;
      vector<int> a(n);
      for(int i =0;i<n; i++) cin>>a[i];
      
      sort(a.begin(),a.end());
       
      int frq = 0;
      int ans = a[0];
      int cnt =1;

      for(int i =1; i<n; i++){
        if(a[i] == a[i-1]){
            cnt++;
        }else {
            if(cnt>frq){
                frq = cnt;
                ans = a[i-1];
            }
            cnt = 1;
        }
      }
      if(cnt>frq){
        frq = cnt;
        ans = a[n-1];
      }
      cout<<ans<<endl;

  }
  return 0;
}
