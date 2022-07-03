#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0);
    string s,t;
    int count=0;
    cin>>s>>t;
    for(int i=0; i<t.size(); i++)
    {
        if(s[count]==t[i])
            count++;
    }
    cout<<count+1;
    return 0;
}


