#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int m,n;
    while(cin>>n>>m)
    {
        int ans=0,temp=5-m;
        while (n--)
        {
            int temp2;
            cin>>temp2;
            if (temp2<=temp)
                ans++;
        }
        cout<<ans/3<<endl;
    }
    return 0;
}

