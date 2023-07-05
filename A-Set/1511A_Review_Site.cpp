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
        int arr[n];
        int count=0;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            if(arr[i]!=2)
                count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}
