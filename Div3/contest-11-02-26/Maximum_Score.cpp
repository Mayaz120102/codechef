#include <bits/stdc++.h>
using namespace std;
int main()
{ 
  int t;
  cin>>t;
  while(t--){
      int n;cin>>n;
      vector<int>a(n),b(n);

      for(int i=0;i<n; i++) cin>>a[i];

      for(int i =0; i<n;i++) cin>>b[i];

      int sum =0;
      int mindiff = 100000; 

      for(int i=0;i<n;i++){
        sum += a[i];
        int diff = a[i]-b[i];
        if(diff<mindiff) mindiff = diff;
      }

      int res = sum - mindiff;
      cout<<res<<endl;
  }
  return 0;
}
