#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int x = abs(a-b) + abs(a-c);
        int y = abs(b-a) + abs(b-c);
        int z = abs(c-a) + abs(c-b);
        cout<<min(x,min(y,z))<<"\n";
    }
}
