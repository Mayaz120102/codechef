#include <bits/stdc++.h>
using namespace std;
int main()
{ 
  int t;
  cin>>t;
  while (t--)
  {
    /* code */
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
    }
    int mn = INT_MAX;
    for (int i = 0; i < n-1; i++)
    {
        mn= min(mn,a[i]+a[i+1]); 
    }
    
    cout<<mn<<endl;
  }
  
  
  return 0;
}
