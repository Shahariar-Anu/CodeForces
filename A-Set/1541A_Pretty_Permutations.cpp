#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n,d;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==1)
        {
            for(int i=1; i<=n-3; i+=2)
                cout<<i+1<<" "<<i<<" ";
            cout<<n<<" "<<n-2<<" "<<n-1<<"\n";
        }
        else
        {
            for(int i=1; i<=n; i+=2)
                cout<<i+1<<" "<<i<<" ";
            cout<<"\n";
        }
    }
    return 0;
}

