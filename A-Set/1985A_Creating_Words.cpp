#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    string a,b;
    while(t--)
    {
        cin>>a>>b;
        swap(a[0], b[0]);
        cout<<a<<" "<<b<<"\n";
    }
    return 0;
}

