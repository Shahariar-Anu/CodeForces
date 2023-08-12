#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n,d;
    cin>>t;
    while(t--)
    {
        cin>>n>>d;
        int arr[n+1];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        sort(arr,arr+n);
        bool ok=false;
        for(int i=0; i<n; i++)
        {
            if(arr[i]+arr[i+1]<=d)
            {
                ok=true;
                break;
            }
        }
        if(arr[n-1]<=d || ok==true)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
