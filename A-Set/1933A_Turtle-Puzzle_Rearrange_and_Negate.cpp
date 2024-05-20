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
        int sum=0, arr[n+1];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=abs(arr[i]);
        }
        cout<<sum<<"\n";
    }
}
