#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,x,y,rem=0;
        cin>>a>>b>>c>>x>>y;
        if(a>=x && b>=y)
            cout<<"YES\n";
        else if(x>a)
        {
            rem=x-a;
            if(b<y)
                rem+=y-b;
            if(rem<=c)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else if(y>b)
        {
            rem=y-b;
            if(a<x)
                rem+=x-a;
            if(rem<=c)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}

