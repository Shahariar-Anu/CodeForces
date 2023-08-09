#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    string s,a= "codeforces";
    while(t--)
    {
        cin>>s;
        int count=0;
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]!=s[i])
                count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}


