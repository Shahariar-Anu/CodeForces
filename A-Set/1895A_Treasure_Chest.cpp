#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,k;
        cin>>x>>y>>k;
        if(x<y)
        {
            if(y-x>=k)
                cout<<y+(y-(x+k))<<"\n";
            else
                cout<<y<<"\n";
        }
        else
            cout<<x<<"\n";
    }
    return 0;
}

