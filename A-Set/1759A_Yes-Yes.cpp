#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int idx;
        string s="";
        for(int i=0; i<30; i++)
            s+="Yes";
        if((idx=s.find(str,0)) == string::npos)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
