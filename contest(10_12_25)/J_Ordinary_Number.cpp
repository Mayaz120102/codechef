#include <bits/stdc++.h>
using namespace std;
int main()
{ 
  int n;
  cin>>n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin>>a[i];
  }
  int mn;
  for (int i = 0; i < n; i++)
  {
    for (int j = i+1; i < n; j++)
    {
        for (int k = i+2; i < n-1; k++)
        {
           mn = min({a[i],a[j],a[k]});
        }
        
    }
    
  }

  cout<<mn;
  
  
  return 0;
}
