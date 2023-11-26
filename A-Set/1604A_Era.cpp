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
        long long int res=0;
        for(int i=1; i<=n; i++)
        {
            int x;
            cin>>x;
            int dif=x-i;
            if(res<dif)
                res=dif;
        }
        cout<<res<<"\n";
    }
    return 0;
}


