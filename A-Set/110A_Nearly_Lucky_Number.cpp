#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string s;
    cin>>s;
    int count=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='7' || s[i]=='4')
            count++;
    }
    if(count==7 || count==4)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
