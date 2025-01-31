#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(n<m)
            cout<<"No\n";
        else if((n-m)%2==0)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
}


