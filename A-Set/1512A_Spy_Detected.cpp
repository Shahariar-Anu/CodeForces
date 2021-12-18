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
        {
            cin>>arr[i];
        }
        bool found=false;
        for(int i=1; i<n-1; i++)
        {
            if(arr[i]!=arr[i-1] && arr[i]!=arr[i+1])
            {
                cout<<i+1<<"\n";
                found=true;
            }
        }
        if(!found)
        {
            if(arr[0]!=arr[1])
                cout<<1<<"\n";
            else
                cout<<n<<"\n";
        }
    }
    return 0;
}

