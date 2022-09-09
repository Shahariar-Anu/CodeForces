#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n,k,time,sum=0,count=0;
    cin>>n>>k;
    time=240-k;
    for(int i=1; i<=n; i++)
    {
        sum+=(i*5);
        if(sum>time)
            break;
        count++;
    }
    cout<<count;
    return 0;
}
