#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,count=6, a=0,res=0;
        string x,s;
        cin>>n>>m;
        cin>>x>>s;
        while(count--)
        {
            if(x.find(s) != string::npos)
            {
                a=1;
                break;
            }
            res++;
            x+=x;
        }
        if(a==1)
            cout<<res<<"\n";
        else
            cout<<"-1\n";
    }

}

