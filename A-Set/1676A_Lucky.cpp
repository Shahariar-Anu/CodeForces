#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum1=0,sum2=0;
        cin>>n;
        for(int i=1; i<=3; i++)
        {
            sum1=sum1+n%10;
            n/=10;
        }
        for(int i=1; i<=3; i++)
        {
            sum2=sum2+n%10;
            n/=10;
        }
        if(sum1==sum2)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
