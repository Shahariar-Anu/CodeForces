#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0);
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a>b)
            swap(a,b);
        cout<<max(a*2,b)*max(a*2,b)<<"\n";
    }
    return 0;
}

