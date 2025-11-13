
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
        int n = s.size();
        int m = s[0]-'0';
        int a = (n-1)*9 +m;
        cout<<a<<"\n";

    }
}
