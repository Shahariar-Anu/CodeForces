#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    char c;
    for(int i=1; i<=t; i++)
    {
        cin>>c;
        if(c=='c' || c=='o' || c=='d' || c=='f' || c=='o' || c=='r' || c=='e' || c=='s')
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
