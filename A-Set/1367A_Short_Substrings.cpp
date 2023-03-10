#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        string s, s1;
        cin>>s;
        int l = s.size();
        for(int i=0; i<l-1; i++)
        {
            if(i==0)
            {
                s1 += s[i];
            }
            if(s[i] == s[i-1])
            {
                s1 += s[i];
                i++;
            }
        }
        s1 += s[l-1];
        cout<<s1<<"\n";
    }
    return 0;
}

