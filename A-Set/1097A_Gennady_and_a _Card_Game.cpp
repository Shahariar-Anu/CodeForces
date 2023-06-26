#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int i,j,k,n,m;

    string s, x;
    cin>>s;
    for(i=0;i<5;i++)
    {
        cin>>x;
        if(x[0]==s[0] || x[1]==s[1])
        {
            cout<<"YES\n";
            return 0;
        }
    }

    cout<<"NO";

    return 0;
}
