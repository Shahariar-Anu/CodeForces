#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        int arr[n+1], narr[n+1];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            narr[i]=arr[i];
        }
        sort(narr,narr+n);
        for(int i=0; i<n; i++)
        {
            if(arr[i]%2==0 && narr[i]%2==0 || arr[i]%2!=0 && narr[i]!=0)
                count++;
        }
        if(count==n)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}

