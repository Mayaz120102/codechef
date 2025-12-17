// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   int t;
//   cin>>t;
//   while(t--){
//     string s;
//     cin>>s;
//     int n= s.size();
//     int ones = count(s.begin(), s.end(),'1');

//     int ls = 1;
//     for (int i = 1; i < n; i++)
//     {
//         if(s[i]!= s[i-1])
//            ls++;
//     }
//     cout<<ones-ls/2<<endl;

//   }
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();

        int ones = count(s.begin(), s.end(), '1');

        int las = 1;
        for (int i = 1; i < n; i++)
            if (s[i] != s[i - 1])
                las++;

        cout << ones - las / 2 << "\n";
    }
}
