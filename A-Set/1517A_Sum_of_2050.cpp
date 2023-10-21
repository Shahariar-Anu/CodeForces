#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        if(n%2050==0)
        {
            long long int x=n/2050;
            long long int sum=0;
            while(x!=0)
            {
                sum+=x%10;
                x/=10;
            }
            cout<<sum<<"\n";
        }
        else
            cout<<"-1\n";
    }
    return 0;
}
