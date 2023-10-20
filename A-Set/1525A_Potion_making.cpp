#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        int a=k;
        int b=100-k;
        int c=__gcd(a,b);
        a/=c;
        b/=c;
        int total=a+b;
        cout<<total<<"\n";
    }
    return 0;
}

