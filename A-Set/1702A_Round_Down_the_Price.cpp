#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,m;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        int k=n;
        while(n)
        {
            count++;
            n/=10;
        }
        m=1;
        for(int i=1; i<count; i++)
            m*=10;
        cout<<k-m<<"\n";
    }
    return 0;
}

