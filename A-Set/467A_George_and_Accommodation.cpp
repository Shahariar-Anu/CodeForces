#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n,count=0;
    cin>>n;
    int p[n+1],q[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>p[i]>>q[i];
        if(q[i]-p[i]>=2)
            count++;
    }
    cout<<count;
    return 0;
}
