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
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        int maxi=0;
        for(int i=1; i<n; i++)
        {
            if(arr[i]<arr[i-1])
                if(maxi<arr[i-1])
                    maxi=arr[i-1];
        }
        cout<<maxi<<"\n";
    }
    return 0;
}
