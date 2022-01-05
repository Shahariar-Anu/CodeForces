#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n,m;
    cin>>n>>m;
    string s[n][m];
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin>>s[i][j];

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            if(s[i][j]=="C" || s[i][j]=="M" || s[i][j]=="Y")
            {
                cout<<"#Color";
                return 0;
            }
    cout<<"#Black&White";
    return 0;
}

