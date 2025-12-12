#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        if (y == x + 1)
            cout << "YES\n";
        else
        {
            int diff = x - y + 1;
            if (diff > 0 && diff % 9 == 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}

