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
        string s,t;
        cin>>s;
        t=s;
        sort(t.begin(), t.end());
        if(t==s)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
}
