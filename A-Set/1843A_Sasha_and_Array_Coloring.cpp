#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n+1];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        sort(arr,arr+n);
        int l=0,r=n-1,ans=0;
        while(l<r)
        {
            ans+=(arr[r]-arr[l]);
            l++;r--;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
