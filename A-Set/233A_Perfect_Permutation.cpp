#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    if(n%2!=0)
        cout<<"-1\n";
    else
    {
        vector<int>ans(n+1);
        for(int i=1; i<=n; i++)
            ans[i]=i;
        for(int i=1; i<n; i+=2)
            swap(ans[i],ans[i+1]);
        if(n>1 && n%2!=0)
            swap(ans[n-1],ans[n]);
        for(int i=1; i<=n; i++)
            cout<<ans[i]<<" ";
    }
    return 0;
}
