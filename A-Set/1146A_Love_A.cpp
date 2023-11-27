#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s;
    cin>>s;
    int len=s.size();
    int count=0;
    for(int i=0; i<len; i++)
    {
        if(s[i]=='a')
            count++;
    }
    cout<<min(len,2*count-1)<<"\n";
    return 0;
}

