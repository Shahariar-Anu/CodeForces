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
        for(int i=0; i<n; i++)
            cin>>arr[i];
        int sum=0;
        sort(arr,arr+n);
        for(int i=1; i<n; i++)
        {
            sum+=abs(arr[0]-arr[i]);
        }
        cout<<sum<<"\n";
    }
    return 0;
}

