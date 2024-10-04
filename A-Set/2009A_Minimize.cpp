#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    int a,b;
    while(t--)
    {
        cin>>a>>b;
        cout<<abs(a-b)<<"\n";
    }
    return 0;
}

