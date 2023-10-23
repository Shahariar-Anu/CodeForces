#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        string s[9];
        for(int i=0; i<8; i++)
            cin>>s[i];
        int x,y;
        for(int i=0; i<7; i++)
        {
            for(int j=0; j<7; j++)
            {
                if(s[i-1][j-1]=='#' && s[i-1][j+1]=='#' && s[i+1][j-1]=='#' && s[i+1][j+1]=='#')
                {
                    x=i+1;
                    y=j+1;
                }
            }
        }
        cout<<x<<" "<<y<<"\n";
    }
    return 0;
}


