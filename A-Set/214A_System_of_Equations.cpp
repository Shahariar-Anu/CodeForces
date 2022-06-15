#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n,m,count=0,b;
    cin>>n>>m;
    for(int a=0; a<=sqrt(n); a++)
    {
        b=n-a*a;
        if(a+(b*b)==m)
            count++;
    }
    cout<<count;
    return 0;
}
