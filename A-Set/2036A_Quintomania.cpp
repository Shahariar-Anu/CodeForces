#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1], c=1;
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n-1; i++)
        {
            if(abs(a[i]-a[i+1])!=5 && abs(a[i]-a[i+1])!=7)
            {
                cout<<"No\n";
                c=0;
                break;
            }
        }
        if(c==1)
            cout<<"Yes\n";
    }
}
