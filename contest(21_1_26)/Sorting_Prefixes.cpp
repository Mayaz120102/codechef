#include <bits/stdc++.h>
using namespace std;
int main()
{ 
  int t;
  cin>>t;
  while(t--){
      int n;cin>>n;
      vector<int>a(n);
      for(int i =0; i<n; i++) cin>>a[i];

      int cost = 0;

      for(int i = n-1; i>=0; i--){
        if(a[i]!=i+1){
            cost += a[i];

            sort(a.begin(), a.begin()+i+1);
        }
      }
      cout<<cost<<endl;
  }
  return 0;
}
