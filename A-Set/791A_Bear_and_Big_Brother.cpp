#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int a,b,count=0;
    cin>>a>>b;
    while(true)
    {
        if(a>b)
            break;

        a=3*a;
        b=2*b;
        count++;
    }
    cout<<count;
}
