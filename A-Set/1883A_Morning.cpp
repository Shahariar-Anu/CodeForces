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
        int p=1, count=0;
        for(int i=0; i<s.size(); i++)
        {
            int c=s[i]-'0';
            if(c==0)
                c=10;
            int dis=c-p;
            if(dis<0)
                dis=-dis;
            count+=dis+1;
            p=c;
        }
        cout<<count<<"\n";
    }

}

