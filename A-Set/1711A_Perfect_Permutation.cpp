#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            if(i==1)
                cout<<n<<" ";
            else
                cout<<i-1<<" ";
        }
        cout<<"\n";
    }
    return 0;
}


