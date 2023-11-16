#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,m,n;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        if(max(m,n)==3)
        {
            if(max(m,n)==1)
                cout<<"1 1\n";
            else
                cout<<"2 2\n";
        }
        else
            cout<<"1 1\n";
    }
    return 0;
}

