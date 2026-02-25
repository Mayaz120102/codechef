#include <bits/stdc++.h>
using namespace std;
int main()
{ 
  int t;
  cin>>t;
  while(t--){
      int n, s;
      cin>>n>>s;
      
      vector<int> a(n,0);
      int base = s/n;
      int r = s%n;

      for(int i =0; i<n ;i++){
        a[i] = base;
      }
      
      for(int i=0;i<r;i++) a[i] +=1;
      
      int score = 0;
      for(int i =0; i<n;i++){
        if(a[i]==6) score += 5;
        else score += 6;
      }
      cout<<score<<endl;
  }
  return 0;
}
