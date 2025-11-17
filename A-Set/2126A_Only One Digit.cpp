#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,x;
    cin>>t;
    while(t--)
    {
        cin>>x;
        int minn= 1e9, k=0;
        while(x>0)
        {
            k=x%10;
            x=x/10;
            minn=min(minn,k);
        }
        cout<<minn<<"\n";
    }
}
