#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        int arr[n+10];
        for(int i=0; i<n; i++ )
            cin>>arr[i];
        sort(arr,arr+n);
        if(n==1)
        {
            if(arr[0]>1)
                cout<<"NO\n";
            else
                cout<<"YES\n";
        }
        else
        {
            if(arr[n-1]-arr[n-2]>1)
                cout<<"NO\n";
            else
                cout<<"YES\n";
        }
    }
    return 0;
}
