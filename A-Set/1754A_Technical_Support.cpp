#include<bits/stdc++.h>
using namespace std;
long long int x,y,a,b,d,h;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='Q')
                count++;
            else
                count--;
            if(count<=0)
                count=0;
        }
        if(count<=0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}

