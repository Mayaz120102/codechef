#include <bits/stdc++.h>
using namespace std;
int main()
{ 
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;

    int cV = 0;
    int w = 0;

    for (int i = 0; i < n; i++)
    {
        if(s[i] == '1'){
            cV++;
        }
        int av = (i+1) - cV;

        if(cV>av){
            w++;
        }
    }
    cout<<w<<endl;
    
  }
  return 0;
}
