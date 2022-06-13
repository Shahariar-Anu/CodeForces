#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        cin>>n;
        int arr[n+5];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum%n==0)
            cout<<sum/n<<"\n";
        else
            cout<<sum/n+1<<"\n";
    }
    return 0;
}

