#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int ans = a;
        int r = b % 3;

        if(r == 0)
        {
            ans += b / 3;
            if(c % 3 == 0)
                ans += c / 3;
            else
                ans += (c/3) + 1;
            cout << ans << "\n";
        }
        else if(c >= 3 - r)
        {
            b += (3 - r);
            c -= (3 - r);
            ans += b / 3;
            if(c % 3 == 0)
                ans += c / 3;
            else
                ans += c/3 +1;
            cout << ans << "\n";
        }
        else cout << -1 << "\n";
    }
}
