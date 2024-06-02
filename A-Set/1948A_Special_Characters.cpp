#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    if(n%2==1)
        cout<<"NO\n";
    else
    {
        cout<<"YES\n";
        int i=0;
        while(n)
        {
            if(i%2==0)
            {
                cout<<"AA";
                i=1;
            }
            else
            {
                cout<<"BB";
                i=0;
            }
            n-=2;
        }
        cout<<"\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,n;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
