#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int one=0, zero=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='n')
            one++;
        else if(s[i]=='z')
            zero++;
    }
    for(int i=0; i<one; i++)
        cout<<"1 ";
    for(int i=0; i<zero; i++)
        cout<<"0 ";
    return 0;
}


