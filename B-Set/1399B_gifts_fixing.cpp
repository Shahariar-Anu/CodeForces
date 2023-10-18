#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,n;
    cin>>t;
    while(t--)
    {
        long long int ans=0;
        cin>>n;
        int a[n+1],b[n+1],min_a=INT_MAX, min_b=INT_MAX;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            min_a=min(a[i],min_a);
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
            min_b=min(b[i],min_b);
        }
        for(int i=0; i<n; i++)
        {
            ans+=max(a[i]-min_a, b[i]-min_b);
        }
        cout<<ans<<"\n";
    }
    return 0;
}

