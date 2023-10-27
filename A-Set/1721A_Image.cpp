#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int count=0;
        if(a[0]!=a[1])
            count++;
        if(a[0]!=b[0] && a[1]!=b[0])
            count++;
        if(a[0]!=b[1] && a[1]!=b[1] && b[0]!=b[1])
            count++;
        cout<<count<<"\n";
    }
    return 0;
}
