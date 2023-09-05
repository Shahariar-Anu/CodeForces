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
        int sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        sort(arr,arr+n);
        int count=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]>arr[0])
                count++;
        }
        cout<<count<<"\n";
    }
}

