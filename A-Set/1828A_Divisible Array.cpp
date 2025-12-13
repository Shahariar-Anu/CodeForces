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
        int arr[n];
        for(int i=1; i<=n; i++)
            arr[i] = i*2;
        for(int i=1; i<=n; i++)
            cout<<arr[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
