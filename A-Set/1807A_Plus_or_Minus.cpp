#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int t;
    cin>>t;
    int a,b,c;
    for(int i=0; i<t; i++)
    {
        cin>>a>>b>>c;
        if(a<c)
            cout<<"+\n";
        else
            cout<<"-\n";
    }
    return 0;
}
