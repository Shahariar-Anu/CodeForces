#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(i%2!=0 && i<n)
            cout<<"I hate that ";
        else if(i%2!=0 && i==n)
            cout<<"I hate it";
        else if(i%2==0 && i<n)
            cout<<"I love that ";
        else if(i%2==0 && i==n)
            cout<<"I love it";
    }
    return 0;
}
