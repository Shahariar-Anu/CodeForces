#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        char d;
        cin>>n>>d;
        string s;
        cin>>s;
        string ans="";
        int flag=1;
        for(int i=0; i<n; i++)
        {
            if(s[i]>=d)
                ans+=s[i];
            else if(flag==1)
            {
                ans+=d;
                flag=0;
                i--;
            }
            else
                ans+=s[i];
        }
        if(flag)
            ans+=d;
        cout<<ans<<"\n";
    }
    return 0;
}

