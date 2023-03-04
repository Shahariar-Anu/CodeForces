#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    int a,b,c;
    for(int i=1; i<=t; i++)
    {
        cin>>a>>b>>c;
        if(a+b==c || a+c==b || b+c==a)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}

