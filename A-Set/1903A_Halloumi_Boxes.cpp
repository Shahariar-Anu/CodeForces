#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        if(k>1)
            cout<<("Yes\n");
        else
        {
            bool ok=true;
            for(int i=0; i<n-1; i++)
            {
                if(arr[i]>arr[i+1])
                {
                    ok=false;
                }
            }
            if(ok)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }

    }
}
