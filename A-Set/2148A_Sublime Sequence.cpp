#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>x>>n;
        if(n%2==0)
            cout<<"0\n";
        else
            cout<<x<<"\n";
    }
}
