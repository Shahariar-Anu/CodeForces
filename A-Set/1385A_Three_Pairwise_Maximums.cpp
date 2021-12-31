#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        if(a>b)
            swap(a,b);
        if(a>c)
            swap(a,c);
        if(b>c)
            swap(b,c);
        if(b==c)
        {
            cout<<"YES\n";
            cout<<a<<" "<<a<<" "<<c<<"\n";
        }
        else
            cout<<"NO\n";
    }
    return 0;
}
