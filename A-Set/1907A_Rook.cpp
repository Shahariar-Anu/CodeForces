#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        string pos;
        cin>>pos;
        string s="abcdefgh";
        for(int i=1; i<=8; i++)
        {
            if(pos[1]-'0' != i)
                cout<<pos[0]<<i<<"\n";
        }
        for(int i=0; i<8; i++)
        {
            if(pos[0] != s[i])
                cout<<s[i]<<pos[1]<<"\n";
        }
    }
    return 0;
}

