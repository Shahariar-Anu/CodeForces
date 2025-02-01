#include <bits/stdc++.h>
using namespace std;

int main() {
    long t;
    cin >> t;
    while(t--)
    {
        long a, b, c; cin >> a >> b >> c;
        for(long p = 0; p < 5; p++)
        {
            if(a <= b && a <= c)
                ++a;
            else if(b <= a && b <= c)
                ++b;
            else if(c <= a && c <= b)
                ++c;
        }

        cout << a * b * c << "\n";
    }

    return 0;
}

