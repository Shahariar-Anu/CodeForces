#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    long long int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int arr[n+1];
        long long int sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum<0)
            cout<<1<<"\n";
        else if(sum==0)
            cout<<0<<"\n";
        else
            cout<<sum-n<<"\n";
    }
}
