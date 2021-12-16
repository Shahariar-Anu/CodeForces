#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int a,b;
    cin>>a>>b;
    if(a>=b)
        cout<<b<<" "<<(a-b)/2;
    else
        cout<<a<<" "<<(b-a)/2;
    return 0;
}

