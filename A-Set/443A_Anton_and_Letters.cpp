#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string s;
    int count=0;
    getline(cin,s);
    sort(s.begin(),s.end());
    for(int i=0; i<s.size()-1; i++)
    {
        if(s[i]=='{' || s[i]==' ' || s[i]== ',')
            continue;
        else
            if(s[i]!=s[i+1])
                count++;
    }
    cout<<count;
    return 0;
}
