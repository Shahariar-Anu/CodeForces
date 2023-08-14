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
        bool possible=false;
        for(int i=0; i<n-2; i++)
        {
            if(arr[i]%2 != arr[i+2]%2)
            {
                possible=true;
                break;
            }
        }
        if(possible)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
}

