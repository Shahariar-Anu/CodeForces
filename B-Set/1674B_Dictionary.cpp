#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int x=(s[0]-'a');
        int y=(s[1]-'a');
        if(x>y)
            cout<<x*25+y+1<<"\n";
        else
            cout<<x*25+y<<"\n";
    }
    return 0;
}

