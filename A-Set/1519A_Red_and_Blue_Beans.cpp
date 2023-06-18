#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        long long r,b,d;
        cin>>r>>b>>d;
        if(r>b)
            swap(r,b);
        if((d+1)*r>=b)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}


