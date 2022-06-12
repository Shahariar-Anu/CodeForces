#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,n,count=0,sum=0;
        cin>>a>>b>>n;
        while(sum<=n)
        {
            if(a>b)
            {
                b+=a;
                sum=b;
                count++;
            }
            else
            {
                a+=b;
                sum=a;
                count++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}
