#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        char c;
        cin>>s>>c;
        int n=s.size();
        bool ok=false;
        for(int i=0; i<n; i++)
        {
            if(s[i]==c)
                if(i%2==0 && (n-1-i)%2==0)
                {
                    ok=true;
                    break;
                }
        }
        if(ok)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
