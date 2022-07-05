#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0);
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        string ans="";
        for(int i=0; i<n; i++)
        {
            if(s[i]=='D')
                ans+="U";
            else if(s[i]=='U')
                ans+="D";
            else
                ans+=s[i];
        }
        cout<<ans<<"\n";
    }
    return 0;
}



