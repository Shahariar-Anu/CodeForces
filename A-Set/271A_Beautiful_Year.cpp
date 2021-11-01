#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int y,a,b,c,d;
    cin>>y;
    while(true)
    {
        y=y+1;
        a=y/1000;
        b=(y/100)%10;
        c=(y/10)%10;
        d=y%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
            break;
    }
    cout<<y;
    return 0;
}
