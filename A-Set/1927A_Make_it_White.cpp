#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        int first=0, last=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='B')
            {
                first=i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--)
        {
            if(s[i]=='B')
            {
                last=i;
                break;
            }
        }
        cout<<last-first+1<<"\n";
    }
}
