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
        long long int arr[n+1],ans=0;
        for(int i=0; i<n; i++)
            cin>>arr[i];

        for(int i=0; i<n-1; i++)
            ans=max(ans,arr[i]*arr[i+1]);
        cout<<ans<<"\n";
    }
    return 0;
}

