#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,r=0,l=0,d=0,u=0;
        cin>>x>>y;
        string s;
        cin>>s;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='R')
                r++;
            else if(s[i]=='L')
                l++;
            else if(s[i]=='U')
                u++;
            else
                d++;
        }
        bool flag=true;
        if(x>0 && r<x)
            flag=false;
        if(x<0 && l<abs(x))
            flag=false;
        if(y>0 && u<y)
            flag=false;
        if(y<0 && d<abs(y))
            flag=false;

        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
