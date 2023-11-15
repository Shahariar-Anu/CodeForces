#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        string s, t="";
        cin>>s;
        for(int i=0; i<9; i++)
        {
            if(s[i]=='1')
                t+='1';
            else if(s[i]=='3')
                t+='3';
        }
        cout<<t<<"\n";
    }
    return 0;
}
