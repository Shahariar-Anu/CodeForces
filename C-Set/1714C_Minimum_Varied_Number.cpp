#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        int d=9;
        vector<int>v;
        while(s)
        {
            if(s>d)
            {
                v.push_back(d);
                s-=d;
                d--;
            }
            else
            {
                v.push_back(s);
                s=0;
            }
        }
        int ans =0;
        for(int i=v.size()-1; i>=0; i--)
        {
            ans=(ans*10)+v[i];
        }
        cout<<ans<<"\n";
    }
    return 0;
}

