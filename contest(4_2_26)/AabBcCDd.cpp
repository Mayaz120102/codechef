#include <bits/stdc++.h>
using namespace std;
int main()
{ 
  int t;
  cin>>t;
  while(t--){
      int n;cin>>n;
      string s;cin>>s;

      vector<int> freq(26.0);

      for(char &c:s){
        if(c>='A'&&c<='Z'){
            c= c-'A' +'a';
        }freq[c-'a']++;
      }

      int mx=0,mx2=0;
      for(int f:freq){
        if(f>mx){
            mx2=mx;
            mx=f;
        }else if(f>mx2){
            mx2 =f;
        }
      }
      cout<<mx+mx2<<endl;
  }
  return 0;
}
