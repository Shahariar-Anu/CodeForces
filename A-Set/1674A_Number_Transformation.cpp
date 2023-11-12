#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(y%x==0)
            cout<<"1 "<<y/x;
        else
            cout<<"0 0";
        cout<<"\n";
    }
    return 0;
}


