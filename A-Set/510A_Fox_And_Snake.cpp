#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cin.tie(0);
    int n,m,a=1;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            for(int j=1; j<=m; j++)
                cout<<"#";
        }
        else if(i%2==0)
        {
            if(a==1)
            {
                for(int j=1; j<m; j++)
                    cout<<".";

                cout<<"#";
                a=0;
            }
            else if(a==0)
            {
                cout<<"#";
                for(int j=1; j<m; j++)
                {
                    cout<<".";
                }
                a=1;
            }
        }
        cout<<"\n";
    }
    return 0;
}
