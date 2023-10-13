#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        if(s=="abc" || s=="bac" || s=="cba" || s=="acb")
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}

