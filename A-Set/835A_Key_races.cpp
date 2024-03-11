#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int a,b,c,d,e,x,y;
    cin>>a>>b>>c>>d>>e;
    x=2*d+a*b;
    y=2*e+a*c;
    if(x<y)
        cout<<"First\n";
    else if(x>y)
        cout<<"Second\n";
    else
        cout<<"Friendship\n";

}

