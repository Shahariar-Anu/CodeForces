#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cin.tie(0);
    int k,r;
    cin>>k>>r;
    int i=1;
    while(true)
    {
        int p=k*i;
        if(p%10==0 || p%10==r)
        {
            cout<<i;
            break;
        }
        i++;
    }
    return 0;
}

