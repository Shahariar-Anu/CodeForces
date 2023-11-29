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
        cin>>n;
        long long int ans= (1LL*n*n)+(1LL*(n+1)*2);
        cout<<ans<<"\n";
    }
    return 0;
}


