#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    int sum=0;
    cin>>n;
    int p[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>p[i];
        sum+=p[i];
    }
    cout<<fixed<<setprecision(12)<<(double)sum/n;
    return 0;
}

