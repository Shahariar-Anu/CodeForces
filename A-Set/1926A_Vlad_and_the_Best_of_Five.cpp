#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        int a=0, b=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='A')
                a++;
            else
                b++;
        }
        if(a>b)
            cout<<"A\n";
        else
            cout<<"B\n";
    }
}

