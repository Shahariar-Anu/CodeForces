#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,n,sum1,sum2;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum1=sum2=0;
        if(n%4==0)
        {
            cout<<"YES\n";
            for(int i=2; i<=n; i+=2)
            {
                cout<<i<<" ";
                sum1+=i;
            }
            for(int i=1; i<=n-2; i+=2)
            {
                cout<<i<<" ";
                sum2+=i;
            }
            cout<<sum1-sum2<<"\n";
        }
        else
            cout<<"No\n";
    }
    return 0;
}

