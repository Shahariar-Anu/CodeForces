#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
        int sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            sum+=x;
        }
        if(sum%2 != 0)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
}
