#include <bits/stdc++.h>
using namespace std;
int main()
{ 
  int t;
  cin>>t;
  while(t--){
      int n,k;
      cin>>n>>k;
      vector<int>a(n);
      for(int i =0; i<n;i++) cin>>a[i];
      string s;cin>>s;
      vector<int> t;
      for(int i =0;i<n;i++){
           if(s[i] == '0') t.push_back(a[i]);
      }
      if(t.size()<k) {
        cout<<-1<<endl;
        continue;
      }

      sort(t.begin(),t.end());

      int sum =0;
      for(int i=0; i<k; i++) sum +=t[i];

      cout<<sum<<endl;
  }
  return 0;
}
