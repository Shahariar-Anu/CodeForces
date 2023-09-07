#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        long long int x,y;
        if(l*2<=r)
        {
            x=l;
            y=l*2;
        }
        else
        {
            x=-1;
            y=-1;
        }
        cout<<x<<" "<<y<<"\n";
    }
    return 0;
}



