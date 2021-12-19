#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,n;
        cin>>x>>y>>n;
        int a=n/x;
        int ans=x*a+y;
        if(ans>n)
            ans-=x;
        cout<<ans<<"\n";
    }
    return 0;
}
