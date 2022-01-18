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
        int arr[n], sum=0,even=0,odd=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
            if(arr[i]%2==0)
                even++;
            else
                odd++;
        }
        if(sum%2!=0)
            cout<<"YES\n";
        else if(even>0 && odd>0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
