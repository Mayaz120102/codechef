#include <bits/stdc++.h>
using namespace std;
int main()
{ 
  int t;
  cin>>t;
  while(t--){
    int a,b;cin>>a>>b;
    if(100*b>225*a) cout<<"Small\n";
    else if(100*b<225*a) cout<<"Large\n";
    else cout<<"Equal\n";
  }
  return 0;
}
