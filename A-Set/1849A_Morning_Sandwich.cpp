#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,b,c,h;
    cin>>t;
    while(t--)
    {
        cin>>b>>c>>h;
        if((c+h)>=b)
            cout<<b+b-1<<"\n";
        else
            cout<<(2*(c+h))+1<<"\n";
    }
    return 0;
}


