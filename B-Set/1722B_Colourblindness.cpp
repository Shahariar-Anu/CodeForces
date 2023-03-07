#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s, s1;
        cin>>s>>s1;
        int count = 1;
        for(int i=0; i<n; i++)
        {
            if((s[i] == 'R' && s1[i] != 'R') || (s[i] !='R' && s1[i] == 'R' ))
            {
                count = 0;
                break;
            }
        }
        if(count == 0)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
