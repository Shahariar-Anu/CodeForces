#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,a,b,c,dif;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        dif=abs(a-b);
        int mx= max(a,max(b,c));
        if(mx>dif*2)
            cout<<"-1"<<"\n";
        else
        {
            if(c<=dif)
                cout<<c+dif<<"\n";
            else
                cout<<c-dif<<"\n";
        }
    }
    return 0;
}
