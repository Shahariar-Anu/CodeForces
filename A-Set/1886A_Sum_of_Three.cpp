#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,ok=0;
        cin>>n;
        for(int i=2; i<n/2; i++)
        {
            if(i%3 != 0 && (n-i-1)%3 != 0 && n-i-1>1)
            {
                int z= n-(n-1);
                cout<<"YES\n";
                cout<<i<<" "<< (n-i-1)<<" "<<z<<"\n";
                ok=1;
                break;
            }
        }
        if(!ok)
            cout<<"NO\n";
    }
    return 0;
}



