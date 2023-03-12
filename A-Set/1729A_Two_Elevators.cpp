#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,ff;
        cin>>a>>b>>c;
        if(b<c)
            ff=(c-b)+(c-1);
        if(c<b)
            ff=(b-c)+(c-1);
        if((a-1)>ff)
            cout<<"2\n";
        else if((a-1)<ff)
            cout<<"1\n";
        else
            cout<<"3\n";
    }
    return 0;
}
