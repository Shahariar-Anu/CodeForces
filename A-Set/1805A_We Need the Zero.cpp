#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);

    int t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int xOR = 0;
        for (int i = 0; i < n; i++)
            xOR = (arr[i] ^ xOR);

        if (xOR == 0)
            cout << 0 << "\n";
        else if (n & 1)
            cout << xOR << "\n";
        else
            cout << -1 << "\n";
    }

    return 0;
}

