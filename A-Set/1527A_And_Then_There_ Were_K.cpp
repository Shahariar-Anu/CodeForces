#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        long long int n,ans=1;
        cin>>n;
        while(ans<=n)
            ans*=2;

        ans/=2;
        ans--;
        cout<<ans<<"\n";
    }
    return 0;
}


