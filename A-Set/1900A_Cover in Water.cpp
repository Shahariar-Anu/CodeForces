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
        cin>>n;
        int ans=0, count=0;
        cin>>s;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='.')
            {
                count++;
                ans++;
            }

            else
                count = 0;
            if(count>=3)
                break;
        }
        if(count>=3)
            cout<<"2\n";
        else
            cout<<ans<<"\n";
    }
}
