#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    string s;
    cin>>s;
    bool f = true;
    int n = s.size();
    for(int i=0; i<n-1; i++)
    {
        cout<<s[i];
        if(s[i+1] == s[i] && f)
        {
            f = false;
            if(s[i] == 'a')
                cout<<"b";
            else
                cout<<"a";
        }
    }
    cout<<s[n-1];
    if(f)
    {
        if(s[n-1] == 'a')
            cout<<"b";
        else
            cout<<"a";
    }
    cout<<"\n";
    return 0;
}