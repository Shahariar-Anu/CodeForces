#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int ans=0;
    for(int i=0; i<n; i+=2)
    {
        ans+=arr[i+1]-arr[i];
    }
    cout<<ans;
    return 0;
}

