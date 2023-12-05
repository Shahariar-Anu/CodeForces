#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]==1)
                cout<<n<<" ";
            else if(a[i]==n)
                cout<<1<<" ";
            else
                cout<<(n+1)-a[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

