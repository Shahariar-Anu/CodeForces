#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    int q,n;
    cin>>q;
    while(q--)
    {
      cin>>n;
      string s, t;
      cin>>s>>t;
      sort(s.begin(), s.end());
      sort(t.begin(), t.end());
      if(s==t)
        cout<<"YES\n";
      else
        cout<<"NO\n";
    }
    return 0;
}
