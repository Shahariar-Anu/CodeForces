#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,n;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>n>>s;
        int a=0, b=0, C=0, d=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='?')
                continue;
            else if(s[i]=='A')
                a++;
            else if(s[i]=='B')
                b++;
            else if(s[i]=='C')
                C++;
            else
                d++;
        }
        int score = min(n,a)+min(n,b)+min(n,C)+min(n,d);
        cout<<score<<"\n";
    }
}
