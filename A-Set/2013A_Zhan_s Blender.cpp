#include <iostream>
using namespace std;
int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        long x, y;
        cin >> x >> y;
        long z = (x < y ? x : y);
        cout << (n + z - 1) / z << endl;
    }
    return 0;
}
