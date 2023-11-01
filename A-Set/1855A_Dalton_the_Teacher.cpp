#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        int count=0;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            if(arr[i] == i)
                count++;
        }
        if(count%2==0)
            cout<<count/2<<"\n";
        else
            cout<<count/2+1<<"\n";

    }
    return 0;
}

