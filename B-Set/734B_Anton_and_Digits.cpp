#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int k2,k3,k4,k5;
    cin>>k2>>k3>>k4>>k5;
    int a=min(k2,min(k4,k5));
    k2 -= a;
    int b=min(k2,k3);
    cout<<a*256+b*32;
    return 0;
}

