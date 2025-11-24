#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,l,r,d,u;
    cin>>t;
    while(t--)
    {
        cin>>l>>r>>d>>u;
        if(l==r && r==d && d==u)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
