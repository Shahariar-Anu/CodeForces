#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    long long int n;
    cin>>n;
    n%=4;
    if(n==0 || n==3)
        cout<<0<<"\n";
    else

        cout<<1<<"\n";
    return 0;
}
