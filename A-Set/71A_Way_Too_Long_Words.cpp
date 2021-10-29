#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    string s;
    for(int i=1; i<=n; i++)
    {
        cin>>s;
        if(s.size()<=10)
            cout<<s<<"\n";
        else if(s.size()>10)
        {
            cout<<s[0]<<s.size()-2<<s[s.size()-1]<<"\n";
        }
    }
    return 0;
}
