#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    long long int m,n,x,k;
    cin>>m>>n;
    x=min(m,n);
    k=1;
    while(x>0)
    {
        k*=x;
        x--;
    }
    cout<<k;
    return 0;
}
