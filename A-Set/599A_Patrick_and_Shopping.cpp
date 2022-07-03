#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0);
    int a,b,c,d,d1,d2,d3;
    cin>>d1>>d2>>d3;
    a=d1+d2+d3;
    b=d1*2+d2*2;
    c=d2*2+d3*2;
    d=d1*2+d3*2;
    cout<<min(a,min(b,min(c,d)));
    return 0;
}

