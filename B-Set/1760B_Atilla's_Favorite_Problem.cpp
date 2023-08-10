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
        cin>>s;
        sort(s.begin(),s.end());
        cout<<s[n-1]-'a'+1<<"\n";
    }
    return 0;
}

