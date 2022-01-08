#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,n,m,r;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        r=n*m;
        if(r%2==0)
            cout<<r/2<<"\n";
        else
            cout<<r/2+1<<"\n";
    }
    return 0;
}
