#include<bits/stdc++.h>
using namespace std;


void solve()
{
    string s;
    cin>>s;
    long long count=0;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]=='a' && s[i+1]=='b')
            count++;
        else if(s[i]=='b' && s[i+1]=='a')
            count--;
    }
    if(count==0)
    {
        cout<<s<<endl;
    }
    else if(count==1)
    {
        for(int i=0;i<s.size()-1;i++)
        {
            cout<<s[i];
        }
        cout<<"a\n";
    }
    else
    {
        for(int i=0;i<s.size()-1;i++)
        {
            cout<<s[i];
        }
        cout<<"b\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    long long t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
