#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,m,n;
    cin>>t;
    while(t--)
    {
        int k,x;
        cin>>m>>n>>k;
        x=(m-1)+(n-1)*m;
        if(x==k)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
