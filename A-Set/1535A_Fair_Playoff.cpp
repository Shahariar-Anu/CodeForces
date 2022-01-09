#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a>c && a>d && b>c && b>d)
            cout<<"NO\n";
        else if(c>a && c>b && d>a && d>b)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}

