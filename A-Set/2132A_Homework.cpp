#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,m,n;
    string a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>a;
        cin>>m;
        cin>>b>>c;
        string d="",v="";
        for(int i=0; i<m; i++)
        {
            if(c[i]=='D')
                d+=string(1,b[i]);
            else
                v +=string(1,b[i]);
        }
        reverse(v.begin(),v.end());
        a = v+a+d;
        cout<<a<<"\n";

    }
}
