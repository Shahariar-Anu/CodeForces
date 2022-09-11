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
        cin>>s;
        int count=0;
        if(s[0]=='Y' || s[0]=='y')
            count++;
        if(s[1]=='E' || s[1]=='e')
            count++;
        if(s[2]=='S' || s[2]=='s')
            count++;
        if(count==3)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
