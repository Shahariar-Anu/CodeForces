#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b)
            cout<<c<<"\n";
        else if(a==c)
            cout<<b<<"\n";
        else if(b==c)
            cout<<a<<"\n";
    }

}

