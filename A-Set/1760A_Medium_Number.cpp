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
        if((a>b && b>c) || (a<b && b<c))
            cout<<b<<"\n";
        else if((b>a && a>c)|| (b<a && a<c))
            cout<<a<<"\n";
        else
            cout<<c<<"\n";
    }
    return 0;
}
