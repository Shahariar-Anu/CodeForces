#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,a;
        cin>>n>>m;
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            sum += a;
        }
        int ans;
        if(sum<m)
            ans=0;
        else
            ans=sum-m;
        cout<<ans<<"\n";
    }

    return 0;
}

