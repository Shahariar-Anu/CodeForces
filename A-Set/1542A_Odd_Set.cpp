#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n+n];
        int even=0, odd=0;
        for(int i=1; i<=2*n; i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0)
                even++;
            else
                odd++;
        }
        if(even==odd)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
