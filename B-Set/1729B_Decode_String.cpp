#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,n,i,value;
    string s;
    cin>>t;
    while(t--)
    {
        string b="";
        cin>>n;
        cin>>s;
        for(i=n-1; i>=0;)
        {
            if(s[i]=='0')
            {
                value=(s[i-2]-48)*10+s[i-1]-48;
                i-=3;
            }
            else
            {
                value=s[i]-48;
                i--;
            }
            b+=char(value+97-1);
        }
        reverse(b.begin(),b.end());
        cout<<b<<"\n";
    }
    return 0;
}

