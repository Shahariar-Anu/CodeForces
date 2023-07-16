#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,x,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>x;
        map<int,int>mp;
        cin>>a>>b>>c;
        mp[1]=a;
        mp[2]=b;
        mp[3]=c;
        int ans=0;
        for(int i=1; i<3; i++)
        {
            if(mp[x]==0)
            {
                ans=1;
                break;
            }
            x=mp[x];
        }
        if(ans==0)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
}
