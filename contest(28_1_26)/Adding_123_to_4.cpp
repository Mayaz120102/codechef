#include <bits/stdc++.h>
using namespace std;
int main()
{ 
  int t;
  cin>>t;
  while(t--){
      int x,y,z;cin>>x>>y>>z;

      int pair1 = min(x,z);
      int pair2 = y/2;

      cout<<pair1+pair2<<endl;
  }
  return 0;
}
