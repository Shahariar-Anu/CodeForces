#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        if(n%2 && (k%2==0))
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}


