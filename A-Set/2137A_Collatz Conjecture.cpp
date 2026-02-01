#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,k,x;
    cin>>t;
    while(t--)
    {
        cin>>k>>x;
        while(k--)
        {
            x *=2;
        }
        cout<<x<<"\n";
    }
}
