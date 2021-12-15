#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string a,b,c;
    cin>>a>>b>>c;
    string s=a+b;
    sort(s.begin(),s.end());
    sort(c.begin(),c.end());
    if(s==c)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
