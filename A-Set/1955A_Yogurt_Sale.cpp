#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    int a,b,n;
    while(t--)
    {
        cin>>n>>a>>b;
        cout<< min(2*a,b) * (n/2) + a*(n%2)<<"\n";
    }
    return 0;
}

