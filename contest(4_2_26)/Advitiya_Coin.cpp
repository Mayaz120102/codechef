#include <bits/stdc++.h>
using namespace std;
int main()
{ 
  int t;
  cin>>t;
  while(t--){
      int n;
      long long k;
      cin>>n>>k;
      vector<long long> a(n);
      for(int i =0; i<n; i++) cin>>a[i];

      long long l = a[0], r = a[0];
      int trades = 0;
      
      for(int i =1; i<n; i++){
        // long long d = a[i] - l;
        l = min(l, a[i]);
        r = max(r,a[i]);

        if(r-l>k){
            trades++;
            if(i+1<n){
              l = r= a[i+1];
            }
        i++;
      }
    }
         cout<<trades<<endl;
  }
  return 0;
}
