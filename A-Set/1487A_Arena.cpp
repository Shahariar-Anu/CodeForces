#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0,x,minimum=INT_MAX;
        cin>>n;
        int arr[n+1];
        for(int i=0; i<n; i++)
        {
            cin>>x;
            arr[i]=x;
            minimum=min(minimum,x);
        }
        for(int i=0; i<n; i++)
        {
            if(arr[i]!=minimum)
                count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}
