#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,l;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>l;
        cin>>s;
        if(l==1)
            cout<<"YES\n";
        else if(s=="11" || s=="00")
            cout<<"NO\n";
        else if(l>=3)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}

