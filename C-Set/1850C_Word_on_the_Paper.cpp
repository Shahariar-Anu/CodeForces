#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        char c;
        string s;
        for(int i=0; i<8; i++)
            for(int j=0; j<8; j++)
            {
                cin>>c;
                if(c != '.')
                    s+=c;
            }
            cout<<s<<"\n";
    }
}


