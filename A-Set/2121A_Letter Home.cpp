#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        int arr[n];
        int pos=0;
        for(int i=0; i<n; i++)
            cin>>arr[i];
        sort(arr,arr+n);
        int first=arr[0];
        int last=arr[n-1];

        pos = min(abs(x - first), abs(x - last)) + (last- first);

        cout<<pos<<"\n";
    }
}
