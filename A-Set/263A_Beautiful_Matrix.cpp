#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int i,j,x;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            cin>>x;
            if(x==1)
                cout<<abs(i-3)+abs(j-3);
        }
    }
    return 0;
}
