#include <bits/stdc++.h>
using namespace std;
int main()
{ 
  int t;
  cin>>t;
  while(t--){
      int n;cin>>n;
      vector<int> a(n);
      for(int i =0;i<n;i++) cin>>a[i];

      int crstrk = 0;
      int lngstrk = 0;

      for(int i =0;i<n; i++){
        if(a[i]>=1) {crstrk++;
        lngstrk = max(lngstrk,crstrk);
      }else{
        crstrk =0;
      }}
   cout<<lngstrk<<endl;
  }
  return 0;
}
