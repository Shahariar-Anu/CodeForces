#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    string s;
    int count, pos, pos2,i;
    while(n--)
    {
        cin>>s;
        count=0,pos=0, pos2=0;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]=='1')
            {
                pos=i;
                break;
            }
        }
        for(i=s.size(); i>=pos; i--)
        {
            if(s[i]=='1')
            {
                pos2=i;
                break;
            }
        }
        for(i=pos; i<pos2; i++)
        {
            if(s[i]=='0')
            count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}
