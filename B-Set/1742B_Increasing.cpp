#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        sort(arr,arr+n);
        int a=1;
        for(int i=0; i<n; i++)
        {
            if(arr[i]==arr[i+1])
            {
                a=0;
                break;
            }
        }
        if(a==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}


