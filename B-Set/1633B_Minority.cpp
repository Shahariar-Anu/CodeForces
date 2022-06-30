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
        int one=0, zero=0;
        cin>>s;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='1')
                one++;
            else
                zero++;
        }
        if(zero>one)
            cout<<one<<"\n";
        else if(zero==one)
            cout<<one-1<<"\n";
        else
            cout<<zero<<"\n";
    }
    return 0;
}

