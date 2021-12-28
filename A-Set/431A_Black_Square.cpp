#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int a,b,c,d,ans=0;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='1')
            ans+=a;
        if(s[i]=='2')
            ans+=b;
        if(s[i]=='3')
            ans+=c;
        if(s[i]=='4')
            ans+=d;
    }
    cout<<ans;
    return 0;
}
