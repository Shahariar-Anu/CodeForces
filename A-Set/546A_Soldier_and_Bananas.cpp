#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int k,n,w;
    long long sum=0;
    cin>>k>>n>>w;
    for(int i=1; i<=w; i++)
        sum+=(k*i);

    if(n>sum)
        cout<<"0";
    else
        cout<<sum-n;

    return 0;
}
