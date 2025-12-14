#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a, x, y;
    cin>>a>>x>>y;

    if (a < min(x, y) || a > max(x, y))
        cout<<"YES\n";
    else
        cout<<"NO\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}

