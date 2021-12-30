#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,n,m,mis=0,ch=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n>m)
            mis++;
        else if(n<m)
            ch++;
    }
    if(mis>ch)
        cout<<"Mishka";
    else if(mis<ch)
        cout<<"Chris";
    else
        cout<<"Friendship is magic!^^";
    return 0;
}

