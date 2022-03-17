#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>s;
        int a=0, b=0, c=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='A')
                a++;
            else if(s[i]=='B')
                b++;
            else if(s[i]=='C')
                c++;
        }
        if(c==0)
        {
            if(a==b)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else if(c>0)
        {
            if(b-a==c)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else
            cout<<"NO\n";
    }
    return 0;
}
