#include <bits/stdc++.h>
using namespace std;
int main()
{ 
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    int o =0, z=0, g=0;
    // int count =0;
    for(char c:s) {
        if(c=='1') o++;
        else z++;

        if(o>=z) g++;
    }


    cout<<g<<endl;
  }
  return 0;
}
