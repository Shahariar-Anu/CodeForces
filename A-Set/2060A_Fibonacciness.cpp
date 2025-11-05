#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t, a[5];
    cin>>t;
    while(t--)
    {
        for(int i=1; i<=4; ++i)
            cin>>a[i];
        int a3 = a[1] + a[2];
        int ans1=1;
        if(a3 == a[3]-a[2])
            ans1++;
        if(a3 == a[4]-a[3])
            ans1++;

        a3 = a[3]-a[2];
        int ans2=1;
        if(a3 == a[1]+a[2])
            ans2++;
        if(a3 == a[4]-a[3])
            ans2++;

        a3 = a[4]-a[3];
        int ans3=1;
        if(a[3]-a[2] == a3)
            ans3++;
        if(a[1]+a[2] == a3)
            ans3++;

        cout<<max(ans3, max(ans1, ans2))<<"\n";
    }
}
