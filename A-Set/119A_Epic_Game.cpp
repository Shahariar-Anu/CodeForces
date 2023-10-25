#include<bits/stdc++.h>
using namespace std;
int GCD(int m, int n)
{
    int r;
    while((r=m%n)!=0)
    {
        m=n;
        n=r;
    }
    return n;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int a,b,n;
    cin>>a>>b>>n;
    while(true)
    {
        n-= GCD(a,n);
        if(n==0)
        {
            cout<<0<<"\n";
            break;
        }
        n-=GCD(b,n);
        if(n==0)
        {
            cout<<1<<"\n";
            break;
        }
    }
    return 0;
}

