#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,ans,d;
        cin>>a>>b;
        int aa=a;
        if(b%2==0)
        {
            aa=b/2;
            aa+=1;
        }
        else
        {
            aa=(b+1)/2;
        }
        ans=b%aa;
        if(aa<a)
        {
            d=a-aa;
            ans-=d;
        }
        cout<<ans<<"\n";
    }
    return 0;
}

