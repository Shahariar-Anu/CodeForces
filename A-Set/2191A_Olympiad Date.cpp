#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, idx;
        cin >> n;
        map<int, int> m;
        bool found = false;
        for (int i = 1; i <= n; i++) {
            int digit;
            cin >> digit;
            m[digit]++;
            if (!found && m[0] >= 3 && m[1] >= 1 && m[2] >= 2 && m[3] >= 1 && m[5] >= 1) {
                idx = i;
                found = true;
            }
        }

        if (found)
            cout << idx << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}

