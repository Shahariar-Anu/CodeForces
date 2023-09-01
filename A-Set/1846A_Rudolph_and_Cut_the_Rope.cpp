#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int count=0;
        while(n--)
        {
            int a,b;
            cin>>a>>b;
            if(a>b)
                count++;
        }
        cout<<count<<"\n";
    }
}

