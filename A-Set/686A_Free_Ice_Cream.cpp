#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    long long int n,x,ans=0,b;
    char a;
    cin>>n>>x;
    while(n--)
    {
        cin>>a;
        cin>>b;
        if(a == '+')
            x = x+b;
        else if(b<=x)
            x = x-b;
        else
            ans++;
    }
    cout<<x<<" "<<ans;
    return 0;
}
