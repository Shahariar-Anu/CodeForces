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
        int arr[n+1];
        int odd=0, even=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0)
                even+=arr[i];
            else
                odd+=arr[i];
        }
        if(even>odd)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
