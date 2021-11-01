#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n,k;
    cin>>n>>k;
    for(int i=1; i<=k; i++)
    {
        if(n%10!=0)
            n=n-1;
        else
            n=n/10;
    }
    cout<<n;
    return 0;
}
