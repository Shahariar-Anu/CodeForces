#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        if(m%2!=0)
            m -= 1;

        cout<< n*(m/2)<<"\n";
    }
    return 0;
}

