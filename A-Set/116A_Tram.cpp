#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n,a,b,capacity=0,stillnow=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        stillnow-=a;
        stillnow+=b;
        capacity=max(capacity,stillnow);
    }
    cout<<capacity;
    return 0;
}
