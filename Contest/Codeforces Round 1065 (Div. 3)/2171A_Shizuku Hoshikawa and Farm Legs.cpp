#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==1)
            cout<<"0\n";
        else
            cout<<n/4+1<<"\n";
    }
    return 0;
}
