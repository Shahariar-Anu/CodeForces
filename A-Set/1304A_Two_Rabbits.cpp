#include<bits/stdc++.h>
using namespace std;
long long int x,y,a,b,d,h;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>a>>b;
        d=y-x;
        h=a+b;
        if(d%h==0)
            cout<<d/h<<"\n";
        else
            cout<<-1<<"\n";
    }
    return 0;
}
