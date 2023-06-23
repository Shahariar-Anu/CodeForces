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
        vector<int>v(n);
        for(int i=0; i<n; i++)
            cin>>v[i];
        sort(v.begin(),v.end());
        int mini=INT_MAX;
        for(int i=0; i<n-1; i++)
            mini=min(mini,v[i+1]-v[i]);

        cout<<mini<<"\n";
    }
    return 0;
}
