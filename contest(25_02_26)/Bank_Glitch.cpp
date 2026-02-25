#include <bits/stdc++.h>
using namespace std;
int main()
{ 
  int t;
  cin>>t;
  while(t--){
      int a,b;
      cin>>a>>b;
      int x,y;
      cin>>x>>y;
      int trade = a/x;
      cout<<(a+b)+trade*(y-x)<<endl;
  }
  return 0;
}
