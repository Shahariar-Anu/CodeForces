#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,n;
    cin>>t;
    while(t--)
    {
        string s,t="Timur";
        cin>>n;
        cin>>s;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}


