#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if((m+n)%2==0)
            cout<<"Tonya\n";
        else
            cout<<"Burenka\n";
    }
    return 0;
}

