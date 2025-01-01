#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    long t;
    cin>>t;
    while(t--)
    {
        long n;
        cin>>n;
        cout<<(n/4)+(n%4)/2<<"\n";
    }
    return 0;
}


