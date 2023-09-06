#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
            cout<<((i+1)%n+1)<<" ";
        cout<<"\n";
    }
    return 0;
}


