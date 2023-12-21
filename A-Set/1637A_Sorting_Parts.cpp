#include<bits/stdc++.h>
using namespace std;
long long int x,y,a,b,d,h;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1], c=0;
        vector<int>v1,v2;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            v1.push_back(a[i]);
        }
        v2=v1;
        sort(v2.begin(), v2.end());
        if(v1==v2)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
}
