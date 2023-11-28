#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s[0]=='0')
        {
            cout<<0<<"\n";
            continue;
        }
        int ans=1;
        if(s[0]=='?')
            ans*=9;
        for(int i=1; i<s.size(); i++)
        {
            if(s[i]=='?')
                ans*=10;
        }
        cout<<ans<<"\n";
    }
    return 0;
}


