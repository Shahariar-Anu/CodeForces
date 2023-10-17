#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c,x,y;
        cin>>a>>b>>c;
        x=c%a;
        if(x==0)
            x=a;
        y=(c+a-1)/a;
        cout<<(x-1)*b+y<<"\n";
    }
    return 0;
}


