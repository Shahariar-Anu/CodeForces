#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        count=count+(int)sqrt(n);
        int cube=(int)cbrt(n);
        count=(count+cube)-(int)sqrt(cube);
        cout<<count<<"\n";
    }
    return 0;
}
