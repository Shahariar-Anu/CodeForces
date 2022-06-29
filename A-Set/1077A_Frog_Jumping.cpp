#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,k,ans=0,d;
        cin>>a>>b>>k;
        if(k%2==1)
            d=(k/2)+1;
        else
            d=k/2;
        ans=(a*d)-(k-d)*b;
        cout<<ans<<"\n";
    }
    return 0;
}

