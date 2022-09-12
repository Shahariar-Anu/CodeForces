#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string s;
    char start='a';
    int sum=0,r;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        r=min(abs(s[i]-start),26-abs(s[i]-start));
        sum+=r;
        start=s[i];
    }
    cout<<sum;
    return 0;
}
