#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int a,b,f(0),s(0),d(0);
    cin>>a>>b;
    for(int i=1; i<=6; i++)
    {
        if(abs(a-i)<abs(b-i))
            f++;
        else if(abs(b-i)<abs(a-i))
            s++;
        else
            d++;
    }
    cout<<f<<" "<<d<<" "<<s<<"\n";
    return 0;
}

