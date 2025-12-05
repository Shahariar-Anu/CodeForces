#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if ((b > d) || ((d - b) < (c - a)))
        {
            cout << "-1" << endl;
            continue;
        }
        int res = 2 * (d - b) + (a - c);
        cout << res << "\n";
    }
    return 0;
}

