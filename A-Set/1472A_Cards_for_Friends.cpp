#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long long int w,h,n;
        int count=1;
        cin>>w>>h>>n;
        if(n==1)
        {
            cout<<"YES\n";
            continue;
        }
        while(w%2==0)
        {
            count*=2;
            w=w/2;
        }
        while(h%2==0)
        {
            count*=2;
            h=h/2;
        }
        if(count>=n)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
