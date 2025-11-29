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
        int a[n],b[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
            cin>>b[i];
        int ans=a[n-1];
        for(int i=1; i<n; i++)
        {
            if(a[i-1]>b[i])
                ans+=a[i-1]-b[i];
        }
        cout<<ans<<"\n";
    }
}
