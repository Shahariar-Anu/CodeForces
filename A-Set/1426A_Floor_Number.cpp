#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        int c=2,f=1;
        while(c<n)
        {
            c+=x;
            f++;
        }
        cout<<f<<"\n";
    }
    return 0;
}
