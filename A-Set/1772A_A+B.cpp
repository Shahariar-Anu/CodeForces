
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        char c[6];
        cin>>c;
        cout<<c[0] + c[2] -96<<"\n";
    }
    return 0;
}

