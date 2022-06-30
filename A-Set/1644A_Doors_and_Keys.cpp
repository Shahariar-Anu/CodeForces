#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int r=0, b=0, g=0,count=0;
        cin>>s;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='r')
                r++;
            else if(s[i]=='b')
                b++;
            else if(s[i]=='g')
                g++;

            if(s[i]=='R' && r==0)
                count++;
            if(s[i]=='G' && g==0)
                count++;
            if(s[i]=='B' && b==0)
                count++;
        }
        if(count>0)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
