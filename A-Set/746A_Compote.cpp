#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int a,b,c;
    cin>>a>>b>>c;
    while(1)
    {
        if(a*2 <= b && a*4 <= c)
        {
            cout<<a+a*2+a*4<<"\n";
            break;
        }
        a--;
    }
    return 0;
}


