#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        int a[26]={0};
        a[s[0]-'A']=1;
        bool ok = false;
        for(int i=1; i<n; i++)
        {
            if(s[i]==s[i-1])
                continue;
            if(a[s[i]-'A']>0)
            {
                cout<<"No\n";
                ok=true;
                break;
            }
            a[s[i]-'A']=1;
        }
        if(!ok)
            cout<<"Yes\n";
    }
    return 0;
}

