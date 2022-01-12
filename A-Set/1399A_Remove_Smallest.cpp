#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cin.tie(0);
    int t,n,f,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        f=0;
        int arr[n+1];
        for(i=0; i<n; i++)
            cin>>arr[i];
        sort(arr,arr+n);
        for(i=1; i<n; i++)
        {
            if(arr[i]-arr[i-1]>1)
            {
                f=1;
                cout<<"NO\n";
                break;
            }
        }
        if(f==0)
            cout<<"YES\n";
    }
    return 0;
}
