#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string s;
    int count=0;
    cin>>s;
    sort(s.begin(),s.end());
    for(int i=1; i<s.size(); i++)
        if(s[i]!=s[i-1])
            count++;

    if(count%2!=0)
        cout<<"CHAT WITH HER!\n";
    else
        cout<<"IGNORE HIM!\n";
    return 0;
}
