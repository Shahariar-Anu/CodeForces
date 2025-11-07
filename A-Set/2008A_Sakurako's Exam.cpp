#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int sum = a + 2 * b;
        if ((a == 0 && b & 1) || (b == 0 && a & 1) || (sum & 1))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}

