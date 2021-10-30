#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n,count=0;
    cin>>n;
    string s;
    while(n--)
    {
        cin>>s;
        if(s[1]=='+')
            count++;
        else
            count--;
    }
    cout<<count;
}
